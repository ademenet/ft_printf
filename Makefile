# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/20 11:33:31 by ademenet          #+#    #+#              #
#    Updated: 2016/05/02 11:05:44 by ademenet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SOURCES =	src/ft_apply_flags.c\
			src/ft_check.c\
			src/ft_dispatcher.c\
			src/ft_flag_c.c\
			src/ft_flag_d.c\
			src/ft_flag_s.c\
			src/ft_initialize_functions.c\
			src/ft_parsing.c\
			src/ft_printf.c\
			src/ft_width_and_precision.c\
			utils/ft_atoi.c\
			utils/ft_isdigit.c\
			utils/ft_itoa_base.c\
			utils/ft_putchar.c\
			utils/ft_putnbr.c\
			utils/ft_putwchar.c\
			utils/ft_strlen.c\
			utils/ft_strsub.c\
			utils/ft_strsub.c\
			utils/ft_wcharlen.c\

HEADERS = include/ft_printf.h

OBJECT = $(SOURCES:.c=.o)

$(NAME):
	@$(CC) $(FLAGS) -c $(SOURCES)
	@ar rc $(NAME) $(OBJECT)
	@ranlib $(NAME)
	@echo "\033[1;34mLibftprintf\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

all: $(NAME)

clean:
	@rm -rf $(OBJECT)
	@echo "\033[1;34mLibftprintf\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -fr $(NAME)
	@echo "\033[1;34mLibftprintf\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all

.PHONY: clean fclean
