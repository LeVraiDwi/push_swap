#!/bin/bash
echo "test1:"
ARG=`cat num500`; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG

echo "test2:"
ARG=`cat num100`; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG

echo "test3:"
ARG="1 4 3 5"; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG

echo "test4:"
ARG="1 2 5 4 3"; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG

echo "test5:"
ARG="1 3 4 6 5"; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG

echo "test6:"
ARG="1 4 26 6 3"; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG

echo "test7:"
ARG="1 5 4 6 3"; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG

echo "test8:"
ARG="2 3 4 6 5"; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG

echo "test9:"
ARG="2 4 25 6 3"; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG

echo "test10:"
ARG="2 5 4 6 3"; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG

echo "test11:"
ARG="3 4 1 6 2"; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG

echo "test12:"
ARG="3 5 4 56 6"; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG

echo "test13:"
ARG="4 5 67 6 3"; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG

echo "test14:"
ARG="1 4 6 2"; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG

echo "test15:"
ARG="2 4 6 5"; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG

echo "test16:"
ARG="3 56 6 38"; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG

echo "test17:"
ARG="4 34 6 3"; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG

echo "test18:"
ARG="5 1 4 3"; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG
