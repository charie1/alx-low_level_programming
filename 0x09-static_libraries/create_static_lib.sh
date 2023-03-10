#!/bin/bash
gcc -c allfiles.c allfiles.o
ar rcs liball.a allfiles.o
