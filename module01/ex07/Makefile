# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/02 05:04:05 by yuhan             #+#    #+#              #
#    Updated: 2021/02/07 23:27:29 by yuhan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRCDIR = ./
SRCNAMES = $(shell ls $(SRCDIR) | grep -E ".+\.cpp")
SRC = $(addprefix $(SRCDIR), $(SRCNAMES))
BUILDDIR = ./build/
BUILDOBJS = $(addprefix $(BUILDDIR), $(SRCNAMES:.cpp=.o))
INCDIR = ./inc/

CC = clang++
CFLAGS = -Wall -Werror -Wextra

all: $(BUILDDIR) $(NAME)

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

$(BUILDDIR)%.o:$(SRCDIR)%.cpp
	$(CC) $(CFLAGS) -I$(INCDIR) -o $@ -c $<

$(NAME): $(BUILDOBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(BUILDOBJS)

clean:
	rm -rf $(BUILDDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re
