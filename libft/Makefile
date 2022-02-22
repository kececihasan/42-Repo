NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rsc

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_itoa.c  \
ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_strchr.c \
ft_strdup.c \
ft_strjoin.c ft_strlcat.c ft_strlen.c \
ft_strnstr.c ft_strrchr.c \
ft_strtrim.c ft_tolower.c ft_toupper.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRCS)
	@$(AR) $(NAME) $(OBJS)
	@echo "[INFO] Kütüphane [$(NAME)] oluşturuldu!"

clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objeler silindi!"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] Kütüphane [$(NAME)] silindi!"

re: fclean all

.PHONY: all clean fclean re
