# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 01:24:17 by ankasamanya       #+#    #+#              #
#    Updated: 2022/04/15 14:16:14 by ankasamanya      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_strnstr.c \
		ft_isdigit.c \
		ft_putstr_fd.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_memcmp.c \
		ft_putnbr_fd.c \
		ft_strchr.c \
		ft_striteri.c \
		ft_bzero.c \
		ft_strjoin.c \
		ft_isascii.c \
		ft_memcpy.c \
		ft_isprint.c \
		ft_putendl_fd.c \
		ft_toupper.c \
		ft_split.c \
		ft_strrchr.c \
		ft_isalpha.c \
		ft_memchr.c \
		ft_putchar_fd.c \
		ft_memset.c \
		ft_substr.c \
		ft_strncmp.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_memmove.c \
		ft_strlcat.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_atoi.c \
		ft_isalnum.c \
		ft_itoa.c \
		ft_tolower.c \
		ft_strrev.c \
		ft_intlen.c \
		ft_printf/ft_counthex.c \
		ft_printf/ft_intlen.c \
		ft_printf/ft_printu.c \
		ft_printf/ft_putchar.c \
		ft_printf/ft_putstr.c \
		ft_printf/ft_printf.c \
		ft_printf/ft_printp.c \
		ft_printf/ft_printx.c \
		ft_printf/ft_putnbr.c \
		get_next_line/get_next_line.c \
		get_next_line/get_next_line_utils.c \


OBJ = $(SRC:.c=.o)

BONUS =	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

BONUS_OBJ =$(BONUS:.c=.o)

CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rsc

all: $(NAME) $(BONUS)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "\033[92mLibft successfully compiled! 🦎 \033[92m"

clean:
	@$(RM) $(OBJ) $(BONUS_OBJ)
#	@echo "\033[91mLibft successfully cleaned!\033[91m"

fclean: clean
	@$(RM) $(NAME)

re: fclean all

bonus: $(OBJ) $(BONUS_OBJ)
	@$(AR) $(NAME) $(OBJ) $(BONUS_OBJ)
#	@echo "\033[92mLibft successfully compiled! 🐢\033[92m"

.PHONY: all clean fclean re bonus