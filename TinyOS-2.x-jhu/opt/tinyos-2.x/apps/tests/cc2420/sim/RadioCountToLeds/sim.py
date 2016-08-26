#!/usr/bin/env python

import sys, random
from TOSSIM import *

NODES = 2

t = Tossim([])

t.addChannel("RadioCountToLedsC", sys.stdout);

r = t.radio()
m = {}
for i in range(1, NODES+1):
    m[i] = t.getNode(i)

for i in range(1, NODES+1):
    for j in range(1, NODES+1):
        r.add(i, j, -60)
for i in range(1, NODES+1):
    for j in range(100):
        m[i].addNoiseTraceReading(-100)
    m[i].createNoiseModel()
    m[i].bootAtTime(random.random()*20*t.ticksPerSecond())

start = t.time()
while t.time() - start < 2*60*t.ticksPerSecond():
    t.runNextEvent()
