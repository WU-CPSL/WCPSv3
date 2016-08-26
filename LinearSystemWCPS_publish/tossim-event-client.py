#!/usr/bin/env python
from TOSSIM import Tossim
from random import *
from TestNetworkMsg import *
import sys
import socket

enable_main=0;
if enable_main:
	def main():
		rssi_level=sys.argv[1]

		return {'y0':rssi_level}
		rssi_level=int(main()['y0'])
	

else:
	noise_offset = 7
	

# Create a TCP/IP socket
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_address = ('localhost', 10032)
sock.connect(server_address)
try:
	message = '0';
	sock.sendall(message)
	amount_received = 0	
	amount_expected = len(message)
	while amount_received < amount_expected:
		data = sock.recv(90)
		if data:
			amount_received += len(data)
			print data
finally:
    sock.close()