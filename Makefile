# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 13:54:28 by ankasamanya       #+#    #+#              #
#    Updated: 2022/04/16 10:32:07 by ankasamanya      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRC = so_long.c map_check.c

OBJ =	$(SRC:.c=.o)

CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
MV = mv

LIBFT =	./Libft/libft.a

MLX =	libmlx.a  -framework OpenGL -framework AppKit -o

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C mlx
	$(MV) mlx/libmlx.a mlx/..
#	@echo "\033[92mMLX successfully compiled! 🦎 \033[92m"
	$(MAKE) bonus -C Libft
	$(CC) $(FLAGS) $(OBJ) $(MLX) $(NAME) $(LIBFT)
#	@echo "\033[92mLibft successfully compiled! 🐢 \033[92m"


clean:
	@$(MAKE) fclean -C Libft
# 	$(MAKE) clean -C mlx
	@$(RM) $(OBJ) $(BONUS_OBJ) libmlx.a
#	@echo "\033[91mMLX successfully cleaned!\033[91m"

fclean: clean
	@$(RM) $(NAME)
# @echo "\033[91mMLX successfully cleaned!\033[91m"

re: fclean all

.PHONY: all clean fclean re