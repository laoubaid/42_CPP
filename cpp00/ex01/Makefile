# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/30 04:36:40 by laoubaid          #+#    #+#              #
#    Updated: 2024/10/07 01:54:07 by laoubaid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= main.cpp PhoneBook.cpp Contact.cpp
OBJS	= main.o PhoneBook.o Contact.o
NAME	= PhoneBook
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
	rm -rf $(NAME)

re: fclean all

.SECONDARY: $(OBJS)