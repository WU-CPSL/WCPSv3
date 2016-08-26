<jsp:root version="2.1" xmlns:f="http://java.sun.com/jsf/core" xmlns:h="http://java.sun.com/jsf/html"
  xmlns:jsp="http://java.sun.com/JSP/Page" xmlns:webuijsf="http://www.sun.com/webui/webuijsf">

  <jsp:directive.page contentType="text/html" />
  <f:view>
    <!--
      The contents of this file are subject to the terms
      of the Common Development and Distribution License
      (the License).  You may not use this file except in
      compliance with the License.
      
      You can obtain a copy of the license at
      https://woodstock.dev.java.net/public/CDDLv1.0.html.
      See the License for the specific language governing
      permissions and limitations under the License.
      
      When distributing Covered Code, include this CDDL
      Header Notice in each file and include the License file
      at https://woodstock.dev.java.net/public/CDDLv1.0.html.
      If applicable, add the following below the CDDL Header,
      with the fields enclosed by brackets [] replaced by
      you own identifying information:
      "Portions Copyrighted [year] [name of copyright owner]"
      
      Copyright 2007 Sun Microsystems, Inc. All rights reserved.
    -->
    <webuijsf:page>
      <webuijsf:html>
      <f:loadBundle basename="com.wandisco.ubersvn.jsf.messageresources.Resources" var="msgs" />
      <webuijsf:head id="filePopupHead" title="File Browser">
        <script type="text/javascript">
          function selectFile(msg1, msg2)
                        {
                            var domNode = document.getElementById("fileForm:chooserContentPage:fileChooser:fileChooser_selectedField");
                            var selectedFile = domNode.getProps().value;
                            var dirField = window.opener.document.getElementById("documentLoactionInputText");

                            if (selectedFile == null || selectedFile.length == 0) {
                                alert(msg1);
                                return false;
                            }

                            if(dirField == null || dirField.length == 0) {
                                alert(msg2);
                                return false;
                            }
                            if(! /[a-zA-Z]\:\\/m.test(selectedFile))
                            {
                                    selectedFile = "\\\\" + selectedFile;
                            }
                            dirField.value = selectedFile;
                            window.close();
                        }

                   	/**
                     * This js function populates the directory field of parent screen.  
                     * 
                     */
                    function fnPopulateDir(){
             
		    		// Note that explicitly referencing the subcomponent
		    		// TextField input element in the file chooser is not
		    		// appropriate. There is no way to guarantee that
		    		// the id will be literally defined this way.
		    		// The file chooser javascript must expose an
		    		// interface for this field if it is required
		    		// for applications.
		    		//
                    	var lookInField = document.getElementById("fileFormPopup:filePopupContent:fileChooser:fileChooser_lookinField");
                    	var dirPath = lookInField.getProps().value;

                    	var selectedField = document.getElementById("fileFormPopup:filePopupContent:fileChooser:fileChooser_selectedField");
                    	var dirName = selectedField.getProps().value;
                        if (dirName.length > 0) {
                            if (((dirPath.lastIndexOf('\\')) == (dirPath.length-1))){
                                     dirPath = dirPath + dirName;   
		          			} else if ((dirPath.indexOf('\\')) >= 0 ) {
                                   dirPath = dirPath + "\\" + dirName;  
                            }
                            if ( (dirPath.lastIndexOf('/')) == (dirPath.length-1)){
                                     dirPath = dirPath + dirName;            
                            } else if ((dirPath.lastIndexOf('/')) >= 0) {
                                     dirPath = dirPath + "/" + dirName;
                            }
                        }
                     	// Replace \ with / if found
                        var newString = dirName.split('\\');
  						newString = newString.join('/');
  						dirName = newString;
		    			
		    			var dirField = window.opener.document.getElementById(window.opener.document.getElementById('popupField').value);
						var serverOS = window.opener.document.getElementById('serverOS').value;
						//alert(serverOS);
                    	if (serverOS == 'Windows'){
			    			dirField.value = dirName;
						} else {
							dirField.value = dirPath;
						}

                        window.close();
                    }
                    function init() {
                        var domNode = document.getElementById("fileFormPopup:filePopupContent:fileChooser");
                        if (domNode == null || typeof domNode.setChooseButton != "function") {
                            return setTimeout('init();', 10);
                        }
                        domNode.setChooseButton("fileFormPopup:filePopupContent:select_file");
                        //alert(window.opener.document.getElementById('popupForm').value + ":" + window.opener.document.getElementById('popupField').value);
                    }
                  </script>

      </webuijsf:head>
      <webuijsf:body onLoad="init();">
        <webuijsf:form id="fileFormPopup">
          <!-- Page Title -->
          <webuijsf:contentPageTitle id="filePopupContent" title="File Browser!">
            <webuijsf:markup tag="div" styleClass="#{themeStyles.CONTENT_MARGIN}">

              <!-- File Chooser -->
              <f:verbatim>
                <![CDATA[<table><tr><td>]]>
              </f:verbatim>
              <webuijsf:fileChooser id="fileChooser" lookin="" selected="" sortField="size" descending="true" multiple="true"
                folderChooser="false" />
              <f:verbatim>
                <![CDATA[</td></tr>]]>
              </f:verbatim>

              <!--  Close button -->
              <f:verbatim>
                <![CDATA[<tr><td>]]>
              </f:verbatim>
              <webuijsf:button id="select_file" text="Select File" toolTip="Select File and close window" onClick="fnPopulateDir()" />
              <f:verbatim>
                <![CDATA[</td></tr></table>]]>
              </f:verbatim>
            </webuijsf:markup>
          </webuijsf:contentPageTitle>
        </webuijsf:form>
      </webuijsf:body>
      </webuijsf:html>
    </webuijsf:page>
  </f:view>
</jsp:root>
