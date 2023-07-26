# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 16:04:07 by mabdelou          #+#    #+#              #
#    Updated: 2021/11/15 23:53:38 by mabdelou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
NAME = libft.a
FILES = ft_bzero.c \
      ft_memset.c \
      ft_memcpy.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_memmove.c \
      ft_strlen.c \
      ft_isalpha.c \
      ft_isdigit.c \
      ft_isalnum.c \
      ft_isascii.c \
      ft_isprint.c \
      ft_toupper.c \
      ft_tolower.c \
      ft_strchr.c \
      ft_strrchr.c \
      ft_strncmp.c \
      ft_strlcpy.c \
      ft_strlcat.c \
      ft_strnstr.c \
      ft_atoi.c \
      ft_calloc.c \
      ft_strdup.c \
      ft_substr.c \
      ft_strjoin.c \
      ft_strtrim.c \
      ft_split.c \
      ft_striteri.c\
      ft_itoa.c \
      ft_strmapi.c \
      ft_putchar_fd.c \
      ft_putstr_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c

B_FILES = ft_lstnew.c \
      ft_lstadd_front.c \
      ft_lstsize.c \
      ft_lstlast.c \
      ft_lstadd_back.c \
      ft_lstdelone.c \
      ft_lstclear.c \
      ft_lstiter.c \
      ft_lstmap.c

OBJECTS = $(FILES:.c=.o)

B_OBJECTS = $(B_FILES:.c=.o)

all:  $(NAME)

$(NAME): $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)
	ar -rc $(NAME) $(OBJECTS)

bonus: $(B_FILES)
	$(CC) $(CFLAGS) -c $(B_FILES)
	ar -rc $(NAME) $(B_OBJECTS)

clean:
	$(RM) $(B_OBJECTS) $(OBJECTS)

fclean: clean
	$(RM) libft.a

re: fclean all

.PHONY: all clean fclean re bonus
