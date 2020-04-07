#!/bin/bash

g++ -Wall -Werror -std=c++17 -g *.cpp -o lab1

for i in {10..34}
do
   ./lab1 ./testCases/in$i.txt > ./doneTests/out$i.txt
    diff -y ./doneTests/out$i.txt ./answers/out$i.txt
    echo
    echo
    echo
done

