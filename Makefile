# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 13:54:28 by ankasamanya       #+#    #+#              #
#    Updated: 2022/04/15 14:16:50 by ankasamanya      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# SRCS = so_long.c

# NAME = so_long

# MLX = ./mlx/libmlx.a -framework OpenGL -framework AppKit

# OBJS =	$(SRCS:.c=.o)

# LIB =	./Libft/libft.a

# all: $(LIB) $(NAME)

# $(NAME): $(OBJS)
# 	$(CC) $(CFLAGS) $(OBJS) $(MLX) -o $(NAME) $(LIB)

# $(LIB):
# 	$(MAKE) bonus -C Libft

# clean:
# 	$(MAKE) fclean -C Libft
# 	$(RM) $(OBJS)

# fclean: clean
# 	$(RM) $(NAME) 

# re: fclean all 



NAME = so_long

SRC = so_long.c

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
	$(MAKE) bonus -C Libft
	$(CC) $(FLAGS) $(OBJ) $(MLX) $(NAME) $(LIBFT)

clean:
	$(MAKE) fclean -C Libft
	# $(MAKE) clean -C mlx
	$(RM) $(OBJ) $(BONUS_OBJ) libmlx.a

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re