#!/bin/bash
gcc -Wall -pedantic -Werror -Wextre -o *.c
ar -rc liball.a *.o
ranlib liball.a
