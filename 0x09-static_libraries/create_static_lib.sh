#!/bin/bash
gcc - -Wall -pedantic -Wextra -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
