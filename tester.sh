#!/bin/bash

ARG=`cat $1`; ./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG
