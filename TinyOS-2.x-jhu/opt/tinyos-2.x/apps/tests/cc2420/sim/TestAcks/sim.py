#!/usr/bin/env python

# The test consists in turing on the motes randomly in the first 20
# seconds. The packets sent by the one that come first will not be
# acked while all the rest will.

import sys, random
from TOSSIM import *

NODES = range(0, 2)

t = Tossim([])

t.addChannel("TestAcks", sys.stdout);

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
    m[i].bootAtTime(long(random.random()*20*t.ticksPerSecond()))

start = t.time()
while t.time() - start < 30*t.ticksPerSecond():
    t.runNextEvent()
