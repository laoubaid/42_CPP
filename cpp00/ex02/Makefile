# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/02 16:33:48 by laoubaid          #+#    #+#              #
#    Updated: 2024/10/04 05:31:40 by laoubaid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= Account.cpp tests.cpp
OBJS	= Account.o tests.o
NAME	= bank
CXX		= c++

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -Wall -Wextra -Werror -std=c++98 $^ -o $(NAME)

%.o: %.cpp
	$(CXX) -Wall -Wextra -Werror -std=c++98 -c $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.SECONDARY: $(OBJS)
