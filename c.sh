#!bin/bash
echo "=======\tmake re"
make re
echo "=======\tcompilation"
gcc -Wall -Werror -Wextra main.c libftprintf.a
echo "=======\texec\n"
./a.out
