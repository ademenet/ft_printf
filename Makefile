# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/20 11:33:31 by ademenet          #+#    #+#              #
#    Updated: 2016/05/10 15:39:49 by tvisenti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC_PATH = ./src

SRC_NAME =	ft_apply_flags.c\
			ft_check.c\
			ft_dispatcher.c\
			ft_flag_s.c\
			ft_flag_S.c\
			ft_flag_c.c\
			ft_flag_C.c\
			ft_flag_d.c\
			ft_flag_D.c\
			ft_flag_i.c\
			ft_flag_o.c\
			ft_flag_O.c\
			ft_flag_u.c\
			ft_flag_U.c\
			ft_flag_x.c\
			ft_flag_X.c\
			ft_flag_p.c\
			ft_flag_undefined.c\
			ft_handler.c\
			ft_printf.c\
			ft_width_and_precision.c\
			ft_display_char.c\
			ft_atoi.c\
			ft_isdigit.c\
			ft_itoa_base.c\
			ft_putchar.c\
			ft_putwchar.c\
			ft_strlen.c\
			ft_strsub.c\
			ft_wcharlen.c\
			ft_strlwr.c

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))

CPP_FLAGS = -Iinclude

OBJ_PATH = ./obj

OBJ = $(SRC_NAME:.c=.o)

$(NAME): $(OBJ)
	@mkdir -p $(OBJ_PATH)
	@$(CC) -c $(SRC) -I $(CPP_FLAGS)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[1;34mLibftprintf\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

$(OBJ):

all: $(NAME)

cc:
	$(CC) main.c $(SRC)

clean:
	@rm -rf $(OBJ)
	@echo "\033[1;34mLibftprintf\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -fr $(NAME)
	@echo "\033[1;34mLibftprintf\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all

.PHONY: clean fclean
