#!/bin/bash

for i in "$@"
do
        git mv relearning-c/$i.cc relearning-c/$i.c
        git commit -m "Rename file \`$i.cc\` tp \`$i.c\`" --date="2022-06-25"
done
