#!/bin/bash
read -p "Name Prefix: " NAME
read -p "Quantity: " QUANTITY
COUNT=1
while [ $COUNT -le $QUANTITY ] ; do
	xe vm-start vm="$NAME$COUNT";
	let COUNT=COUNT+1
	done
exit 0