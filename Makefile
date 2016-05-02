# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/20 11:33:31 by ademenet          #+#    #+#              #
#    Updated: 2016/05/02 12:10:52 by ademenet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC_PATH = src/

UTILS_PATH = utils/

SOURCES =	ft_apply_flags.c\
			ft_check.c\
			ft_dispatcher.c\
			ft_flag_c.c\
			ft_initialize_functions.c\
			ft_parsing.c\
			ft_printf.c\
			ft_width_and_precision.c\

UTILS = 	ft_atoi.c\
			ft_isdigit.c\
			ft_itoa_base.c\
			ft_putchar.c\
			ft_putnbr.c\
			ft_putwchar.c\
			ft_strlen.c\
			ft_strsub.c\
			ft_strsub.c\
			ft_wcharlen.c\

HEADERS = include/ft_printf.h

OBJ_PATH = obj/

OBJECT = $(OBJ_PATH)$(SOURCES:.c=.o)

$(NAME):
	@mkdir $(OBJ_PATH)
	@$(CC) $(FLAGS) -c $(SRC_PATH)$(SOURCES) $(UTILS_PATH)$(UTILS)
	ar rc $(NAME) $(OBJECT)
	@ranlib $(NAME)
	@echo "\033[1;34mLibftprintf\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

all: $(NAME)

clean:
	@rm -rf $(OBJ_PATH)
	@echo "\033[1;34mLibftprintf\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -fr $(NAME)
	@echo "\033[1;34mLibftprintf\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all

.PHONY: clean fclean
