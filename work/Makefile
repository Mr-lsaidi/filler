# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/17 15:03:55 by lsaidi            #+#    #+#              #
#    Updated: 2019/04/20 13:50:39 by lsaidi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=lsaidi.filler
SRC=src/main.c src/get_infos.c src/heat_map.c src/clean.c src/brain.c
HEAD=includes/ft_filler.h
LIB=../libft/libft.a

all : $(NAME)

$(NAME):
	make -C ../libft
	gcc -I$(HEAD) -Wall -Werror -Wextra $(LIB) $(SRC) -o $(NAME)
clean :
	/bin/rm -rf main.o get_infos.o heat_map.o clean.o brain.o
	make -C ../libft clean
fclean : clean
	/bin/rm -rf $(NAME)
	make -C ../libft fclean
re : fclean all
