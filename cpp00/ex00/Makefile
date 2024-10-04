# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/30 04:30:52 by laoubaid          #+#    #+#              #
#    Updated: 2024/10/04 05:33:46 by laoubaid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= megaphone.cpp
OBJS	= megaphone.o
NAME	= megaphone
CXX		= c++

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -Wall -Wextra -Werror -std=c++98 $^ -o $(NAME)

%.o: %.cpp
	$(CXX) -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf megaphone

re: fclean all

.SECONDARY: $(OBJS)
