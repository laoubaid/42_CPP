# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/02 16:33:48 by laoubaid          #+#    #+#              #
#    Updated: 2024/10/07 01:55:28 by laoubaid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= main.cpp
OBJS	= main.o
NAME	= brain
CXX		= clang++  # change it(c++)!
FLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $^ -o $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.SECONDARY: $(OBJS)
