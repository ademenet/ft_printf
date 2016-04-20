#!bin/bash
echo "make re"
make re
echo "compilation"
gcc -Wall -Werror -Wextra main.c libftprintf.a
echo "exec\n\n"
./a.out
