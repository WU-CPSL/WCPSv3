#!/usr/bin/env python

# The test consists in turing on the motes 1 to N at 10 seconds apart
# and then, 10 more seconds later start the mote 0.  When mote 0 all
# the send will fail.

import sys, random
from TOSSIM import *

N = 1
NODES = range(0, N+1)

t = Tossim([])

t.addChannel("TestPacketLink", sys.stdout);
#t.addChannel("PacketLink", sys.stdout);

r = t.radio()
m = {}
for i in NODES:
    m[i] = t.getNode(i)

for i in NODES:
    for j in NODES:
        if i != j:
            print "Add link", i, j
            r.add(i, j, 0)
for i in NODES:
    for j in range(100):
        m[i].addNoiseTraceReading(-100)
    m[i].createNoiseModel()
    if i != 0:
	m[i].bootAtTime(i*10*t.ticksPerSecond())
rootStart = 10*(len(NODES) + 1) * t.ticksPerSecond()
m[0].bootAtTime(rootStart)

start = t.time()
while t.time() - start < rootStart + 10*t.ticksPerSecond():
    t.runNextEvent()
