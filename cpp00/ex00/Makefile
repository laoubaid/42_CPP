# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/30 04:30:52 by laoubaid          #+#    #+#              #
#    Updated: 2024/10/07 01:53:42 by laoubaid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= megaphone.cpp
OBJS	= megaphone.o
NAME	= megaphone
CXX		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $^ -o $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf megaphone

re: fclean all

.SECONDARY: $(OBJS)
