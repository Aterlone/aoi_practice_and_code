#!/bin/bash
cp -r template "$1"
cd "$1"
touch "$1"in.txt "$1"out.txt
echo clang++ -o "$1" template.cpp >> conf.sh
chmod +x conf.sh
code "$1"in.txt template.cpp