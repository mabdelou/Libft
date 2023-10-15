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


CC := gcc
CFLAGS := -Wall -Werror -Wextra
RM := rm -rf
NAME := libft.a
OBJ_PATH := $(shell mkdir -p obj ; echo "obj/")
FILES_PATH := src/Libft_mondatory/
B_FILES_PATH := src/Libft_bonus/
FILES = $(shell ls $(FILES_PATH) | grep ".c$$")
B_FILES = $(shell ls $(B_FILES_PATH) | grep ".c$$")
OBJECTS = $(patsubst %.c,$(OBJ_PATH)%.o,$(notdir $(FILES)))
B_OBJECTS = $(patsubst %.c,$(OBJ_PATH)%.o,$(notdir $(B_FILES)))
FILES = $(addprefix $(FILES_PATH), $(shell ls $(FILES_PATH) | grep ".c$$"))
B_FILES = $(addprefix $(B_FILES_PATH), $(shell ls $(B_FILES_PATH) | grep ".c$$"))

all: $(OBJECTS)

$(OBJ_PATH)%.o : $(FILES_PATH)%.c
	$(CC) $(CFLAGS) -c -o $@ $<
	ar -rc $(NAME) $@

bonus: $(B_OBJECTS)

$(OBJ_PATH)%.o: $(B_FILES_PATH)%.c
	$(CC) $(CFLAGS) -c -o $@ $<
	ar -rc $(NAME) $@

clean:
	$(RM) $(OBJ_PATH)

fclean: clean
	$(RM) libft.a

re: fclean all

.PHONY: all clean fclean re bonus
