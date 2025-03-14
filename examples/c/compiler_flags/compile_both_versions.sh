#! /bin/bash

gcc main.c -o not_optimized
gcc main.c -O3 -o optimized
