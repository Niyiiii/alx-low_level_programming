#!/bin/bash
gcc -o *.c
ar rcs liball.a
ar -rc liball.a *.o
