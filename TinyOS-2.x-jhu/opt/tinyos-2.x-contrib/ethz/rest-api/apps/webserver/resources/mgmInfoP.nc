/* Copyright (c) 2009, Distributed Computing Group (DCG), ETH Zurich.
*  All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*  1. Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*  2. Redistributions in binary form must reproduce the above copyright
*     notice, this list of conditions and the following disclaimer in the
*     documentation and/or other materials provided with the distribution.
*  3. Neither the name of the copyright holders nor the names of
*     contributors may be used to endorse or promote products derived
*     from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS `AS IS'
*  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
*  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
*  ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR CONTRIBUTORS
*  BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
*  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, LOSS OF USE, DATA,
*  OR PROFITS) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
*  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
*  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
*  THE POSSIBILITY OF SUCH DAMAGE.
*
*  @author Lars Schor <lschor@ee.ethz.ch>
* 
*/
// REST includes
#include "Rest.h"

module mgmInfoP{
	uses interface Json;
	uses interface Rest; 
	uses interface Boot; 
	
	uses interface Device; 
}
implementation{	

	/************* Boot ****************/
	event void Boot.booted(){
		call Rest.bind("management/info"); 
	}

	/**
	 * Generates the Element-Response
	 */
	void getElement(char *buf, char *element, uint16_t len){		
		uint16_t bufLen = 0; 
		uint8_t methodList[] = {JSON_METH_GET, JSON_METH_PUT}; 
		
		call Json.createElement(buf, "Information");
		call Json.addMethod(buf,methodList , 2);
		call Json.addParamString(buf, "name", call Device.getName(), 1, 1);
		call Json.addParamString(buf, "place", call Device.getPlace(), 1, 0);
		call Json.addParamInt(buf, "ID", TOS_NODE_ID, "i", 0, 0); 
		
		bufLen = call Json.finishElement(buf); 
		call Rest.sendData(buf, bufLen); 
	}
		
	/**
	 * Generates the Collection-Response
	 */
	void getCollection(char *collection){
		uint16_t len; 
		
		// Add all elements one have and send them as resources
		call Json.createCollection(collection, "res"); 
		call Json.addToCollection(collection, "values", 1); 
		
		len = call Json.finishCollection(collection);
		call Rest.sendData(collection, len);
	}

	/************ REST *****************/
	event void Rest.getReceived(char *elementName, uint16_t len, char *buf){
				
		// Get the request for the collection
		if (strncmp(elementName, "*", 1) == 0)
		{
			getCollection(buf);
		}
		// Get the request for an element
		else
		{
			getElement(buf, elementName, len); 
		}
	}

	event void Rest.putReceived(char *element, uint16_t len, char *param_name, char *param_value){
		
		// The only parameter currently supported is the "status"
		if (strcmp(param_name, "name") == 0)
		{
			call Device.setName(param_value); 
		}
		else if (strcmp(param_name, "place") == 0)
		{
			call Device.setPlace(param_value); 
		}
	}

	event void Rest.deleteReceived(char *elementName, uint16_t len){
	}
}
