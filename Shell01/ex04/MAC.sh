#!/bin/sh
ifconfig -a | grep ether | tr -d "\tether "
