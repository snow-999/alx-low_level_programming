#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar -rc libball.a *.o
ranlib libbal.a
