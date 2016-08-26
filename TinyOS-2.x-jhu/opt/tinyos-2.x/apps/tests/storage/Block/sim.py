#!/usr/bin/env python

from TOSSIM import *
import sys

# Gets TOSSIM variables
t = Tossim([])
t.addChannel("At45db", sys.stdout)
t.addChannel("RandRWC", sys.stdout)
r = t.radio()

# Sets up nodes
node0 = t.getNode(1)
node0.bootAtTime(0 * t.ticksPerSecond())   # Immediately after the simulation starts

# Configures node's background noise level
for j in range(100):
  node0.addNoiseTraceReading(-100)
node0.createNoiseModel()

# Starts running the simulation
for i in range(0, 1000):
    t.runNextEvent()
