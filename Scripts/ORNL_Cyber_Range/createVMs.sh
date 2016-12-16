#!/bin/bash
read -p "Template to use(___Template)? " TEMPLATE
read -p "What should I call them? " NAME
read -p "How many? " QUANTITY
COUNT=1
while [ $COUNT -le $QUANTITY ] ; do
  xe vm-clone vm="$TEMPLATE" \
  new-name-label="$NAME$COUNT";
  let COUNT=COUNT+1
  done
exit 0