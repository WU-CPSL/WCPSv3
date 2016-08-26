#!/bin/bash

# The path to the uberSVN install dir
UBER_HOME=$( (cd $(dirname $0)/.. && pwd) )

# Uber user details
UBER_USER=ubersvn
UBER_USER_ID=`id -u $UBER_USER`

# Current user details
RUNNING_USER=`id -un`
RUNNING_USER_ID=`id -u`

# Must be run as the correct user
if [ "$RUNNING_USER_ID" != "$UBER_USER_ID" -a "$RUNNING_USER" != "$UBER_USER" ] ; then
	echo "This script must be run as the $UBER_USER user, please try:"
	echo "  \$  sudo su - $UBER_USER -c '$0 $@'"
	exit 1
fi

# Must have at least one argument
if [ $# -lt 1 ] ; then
	exit 1
fi

# Get first argument
COMMAND=$1
shift

case "$COMMAND" in
	install)
		# Install a cron job, the pkgtool will execute "in a minute"
		echo "* * * * * bash $UBER_HOME/bin/pkgtool.sh execute $@" > /tmp/uber_cron
		crontab /tmp/uber_cron
	;;
	execute)
		# Remove the cron job and kick off the pkgtool
		crontab -r > /dev/null 2>&1
		cd $UBER_HOME
		$UBER_HOME/jre/bin/java -jar bin/pkgtool.jar $@
	;;
	*)
		exit 1
	;;
esac
