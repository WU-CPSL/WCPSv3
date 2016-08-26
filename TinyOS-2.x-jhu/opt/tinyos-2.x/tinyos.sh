#! /usr/bin/env bash
# Here we setup the environment
# variables needed by the tinyos 
# make system

#echo "Setting up for TinyOS 2.x"
export TOSROOT=
export TOSDIR=
export MAKERULES=
export PYTHONPATH

TOSROOT="/Users/yehanspc/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x"
TOSDIR="$TOSROOT/tos"
CLASSPATH=$CLASSPATH:$TOSROOT/support/sdk/java/tinyos.jar
MAKERULES="$TOSROOT/support/make/Makerules"
PYTHONPATH="/Users/yehanspc/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/support/sdk/python"

export TOSROOT
export TOSDIR
export CLASSPATH
export MAKERULES
export PYTHONPATH

export MSPGCCROOT=/Users/yehanspc/Codes/TinyOS-2.x-jhu/opt/msp430
export AVRGCCROOT=/Users/yehanspc/Codes/TinyOS-2.x-jhu/opt/avr
export NESCROOT=/Users/yehanspc/Codes/TinyOS-2.x-jhu/opt/nesc
export DEPUTYROOT=/Users/yehanspc/Codes/TinyOS-2.x-jhu/opt/deputy
export PATH="$TOSROOT-tools/bin:$NESCROOT/bin:$MSPGCCROOT/bin:$AVRGCCROOT/bin:$DEPUTYROOT/bin:$PATH"

#export PYTHONPATH=$PYTHONPATH:/opt/tinyos-2.1.1/support/sdk/python/
export JAVAPATH=$JAVAPATH:/Users/yehanspc/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/support/sdk/java/
export PATH=$PATH:/Users/yehanspc/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/support/sdk/java/

source /Users/yehanspc/Codes/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/upma.sh

echo "Setting up TinyOS 2.x for WCPSv2 has finished successfully"