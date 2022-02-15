# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkececi <hkececi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/06 12:35:54 by hkececi           #+#    #+#              #
#    Updated: 2022/01/06 12:35:58 by hkececi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC.    = gcc
CFLAGS = -Wall -Wextra -Werror
AR	   = ar rc
RANLIB = ranlib

NAME   = libft.a
HEAD   = libft.h
SRCS   = ft_isalpha.c

OBJS   = $ (SRCS:.c=.o)

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRCS)
	@$(AR) $(NAME) $(OBJS)
	@$(RANLIB) $(NAME)
	@echo "[INFO] Library [$(NAME)] created!"

clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] Library [$(NAME)] removed!"

re:	fclean all
