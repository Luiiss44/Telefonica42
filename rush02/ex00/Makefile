# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arullo-d <arullo-d@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/22 10:12:56 by arullo-d          #+#    #+#              #
#    Updated: 2023/07/23 21:41:01 by lmarquin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#make file for rush02

NAME=rush-02
COMPILER=cc
FILES=main.c aux.c help.c rush02.c
OBJS= $(FILES:.c=.o)

all: $(NAME)
	
$(NAME): $(OBJS)
	$(COMPILER) -Wall -Wextra -Werror $^ -o $@

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

copy:
	cp -r ../ex00 ../ex00_1

re: fclean all


