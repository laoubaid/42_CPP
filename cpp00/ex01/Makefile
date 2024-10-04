# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/30 04:36:40 by laoubaid          #+#    #+#              #
#    Updated: 2024/10/04 17:33:08 by laoubaid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= main.cpp PhoneBook.cpp Contact.cpp
OBJS	= main.o PhoneBook.o Contact.o
NAME	= PhoneBook
CXX		= c++

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -Wall -Wextra -Werror -std=c++98 $^ -o $(NAME)

%.o: %.cpp
	$(CXX) -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.SECONDARY: $(OBJS)