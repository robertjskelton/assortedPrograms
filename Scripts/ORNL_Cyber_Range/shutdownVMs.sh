#!/bin/bash
read -p "Prefix of VMs to shutdown (ubuntu_) " NAME
read -p "Shutdown how many? " QUANTITY
COUNT=1
while [ $COUNT -le $QUANTITY ] ; do
  xe vm-shutdown vm="$NAME$COUNT";
  let COUNT=COUNT+1
  done
exit 0