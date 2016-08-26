#!/usr/bin/env python

from TOSSIM import *
import sys, math

t = Tossim([])
t.addChannel("TestMultiChannel", sys.stdout)
r = t.radio()

node0 = t.getNode(0)
node1 = t.getNode(1)
node0.bootAtTime(0)
node1.bootAtTime(0)

for j in range(100):
  node0.addNoiseTraceReading(-100)
  node1.addNoiseTraceReading(-100)

node0.createNoiseModel()
node1.createNoiseModel()

r.add(0, 1, -10)
r.add(1, 0, -10)

while (t.time() < (10 * t.ticksPerSecond())):
    t.runNextEvent()
