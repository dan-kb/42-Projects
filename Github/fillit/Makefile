# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbanifat <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/11 16:07:43 by dbanifat          #+#    #+#              #
#    Updated: 2016/10/17 15:11:23 by dbanifat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
FILES = ins_del.c interpret.c print.c solve.c ft_strlen.c
SRCS = $(addprefix srcs/,$(FILES))
INCLUDES = ./includes
OBJS = $(FILES:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@gcc $(CFLAGS) -o $(NAME) $(OBJS) -I $(INCLUDES)
	@echo "Compiled executable."

$(OBJS):
	@gcc -c $(CFLAGS) $(SRCS)
	@echo "Compiled object files."

clean:
	@rm -f $(OBJS)
	@echo "Removed object files."

fclean: clean
	@rm -f $(NAME)
	@echo "Removed executable file."

re: fclean all
