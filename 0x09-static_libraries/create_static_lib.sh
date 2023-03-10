#!/bin/bash
gcc -Werror -Wextra -Wall -pedantic -c *.c
ar -rcs liball.a *.o
