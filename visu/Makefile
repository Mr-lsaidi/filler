# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsaidi <lahcen.saidi88@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/20 12:52:30 by lsaidi            #+#    #+#              #
#    Updated: 2019/04/20 13:09:49 by lsaidi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=vis
SRC=src/*.c
HEAD=includes/vis.h
LIB=../libft/libft.a
FLAGS=-L ~/.brew/lib -lSDL2 -lSDL2_ttf -lSDL2main -lSDL2_test \
-I ~/.brew/include/SDL2/ -D_THREAD_SAFE

all : $(NAME)

$(NAME):
	make -C ../libft
	gcc -I$(HEAD) -Wall -Werror -Wextra $(LIB) $(SRC) $(FLAGS) -o $(NAME)
clean :
	/bin/rm -rf *.o
	make -C ../libft clean
fclean : clean
	/bin/rm -rf $(NAME)
	make -C ../libft fclean
re : fclean all