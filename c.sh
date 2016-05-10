#!bin/bash
make re
echo "=======\tcompilation"
clang test/ut_S.c libftprintf.a
