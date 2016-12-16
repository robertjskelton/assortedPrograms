#!/bin/bash
read -p "Prefix of VMs to delete (ubuntu_): " NAME
read -p "How many should I delete? " QUANTITY
COUNT=1
while [ $COUNT -le $QUANTITY ] ; do
  xe vm-uninstall vm="$NAME$COUNT" force=true;
  let COUNT=COUNT+1
  done
exit 0