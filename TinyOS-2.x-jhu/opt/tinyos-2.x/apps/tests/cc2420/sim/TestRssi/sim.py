#!/usr/bin/env python

import sys, getopt
from TOSSIM import *

START = 10  # seconds
END   = 20  # seconds
noise = None

def usage():
    print "Usage: %s [-n noise.txt]" % (sys.argv[0])

(optlist, args) = getopt.getopt(sys.argv[1:], "t:p:n:dh", ["help"])
for (o, v) in optlist:
    if o == '-n':
        noise = v
    if o in ["-h", "--help"]:
        usage()
        sys.exit()

t = Tossim([])

t.addChannel("TestRssiP", sys.stdout);
#t.addChannel("CpmModelC", sys.stdout);

r = t.radio()
m = t.getNode(0)

if noise:
    print "Loading the %s noise trace..." % noise
    for line in file(noise).readlines():
        line = line.strip()
        if line:
            m.addNoiseTraceReading(int(line))
else:
    for j in range(100):
        m.addNoiseTraceReading(-100)
m.createNoiseModel()
m.bootAtTime(START*t.ticksPerSecond())

start = t.time()
while t.time() - start < END*t.ticksPerSecond():
    t.runNextEvent()
