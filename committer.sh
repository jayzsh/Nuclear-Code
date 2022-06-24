#!/bin/bash

for i in "$@"
do
        git add relearning-c/$i
        git commit -m "Add file \`$i\`" --date="2022-06-10"
done
