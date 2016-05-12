# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/20 11:33:31 by ademenet          #+#    #+#              #
#    Updated: 2016/05/12 18:22:55 by ademenet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC_PATH = ./src

SRC_NAME =	ft_apply_flags.c\
			ft_check.c\
			ft_dispatcher.c\
			ft_display_char.c\
			ft_display_numb.c\
			ft_flag_s.c\
			ft_flag_c.c\
			ft_flag_d.c\
			ft_flag_p_undefined.c\
			ft_flag_wu_wo.c\
			ft_flag_u_o.c\
			ft_flag_x.c\
			ft_handler.c\
			ft_printf.c\
			ft_atoi.c\
			ft_isdigit.c\
			ft_itoa_base.c\
			ft_putwchar.c\
			ft_strlen.c\
			ft_strsub.c\
			ft_wcharlen.c\
			ft_strlwr.c\
			ft_wstrlen.c\
			ft_wstrsub.c\
			ft_buf.c\
			ft_transform_wchar.c

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))

CPP_FLAGS = -Iinclude

OBJ = $(SRC_NAME:.c=.o)

$(NAME): $(OBJ)
	@$(CC) -c $(SRC) -I $(CPP_FLAGS)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[1;34mLibftprintf\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

$(OBJ):

all: $(NAME)

cc:
	clang main.c $(SRC)

clean:
	@rm -rf $(OBJ)
	@echo "\033[1;34mLibftprintf\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -fr $(NAME)
	@echo "\033[1;34mLibftprintf\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all

.PHONY: clean fclean
