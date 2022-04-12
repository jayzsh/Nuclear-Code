#!/bin/bash

for x in "$@"
do
    sudo apt install --only-upgrade $x
done
