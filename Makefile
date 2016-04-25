# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/20 11:33:31 by ademenet          #+#    #+#              #
#    Updated: 2016/04/25 13:37:08 by ademenet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SOURCES =	ft_printf.c\
			ft_initialize_functions.c\
			ft_display.c\
			ft_dispatcher.c\
			ft_parsing.c\
			ft_check.c\
			utils/ft_atoi.c\
			utils/ft_strsub.c\
			utils/ft_isdigit.c


HEADERS = ft_printf.h

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
