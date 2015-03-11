#!/bin/sh
# This is some secure program that uses security.

g++ code.cpp
cat in.txt | ./a.out > out.txt
diff uri.txt out.txt