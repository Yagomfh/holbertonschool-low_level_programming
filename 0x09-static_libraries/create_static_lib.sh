#!/bin/bash
gcc -pedantic -Wall -Werror -Wextra -c *.c
ar rc liball.a *.o
