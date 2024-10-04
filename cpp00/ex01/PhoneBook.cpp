/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:49:18 by laoubaid          #+#    #+#             */
/*   Updated: 2024/10/04 17:32:33 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : idx(0), count(0)
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact()
{
	if (ctcts[idx].setInfo())
		return ;
	idx++;
	if (count < 8)
		count++;
	if (idx == 8)
		idx = 0;
}

Contact& PhoneBook::getContact(int i)
{
	return ctcts[i];
}

bool isNumeric(std::string &str)
{
	for (std::size_t i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str.at(i)))
			return false;
	}
	return !str.empty();
}

Contact&	PhoneBook::search(){
	std::string opt;

	for (int i = 0; i < count; i++){
		ctcts[i].affColums(i);
	}
	std::cout << "enter index : ";
	if (std::getline(std::cin, opt).good())
	{
		if (!isNumeric(opt))
			std::cout << "Error: invalid index!" << std::endl;
		else
		{
			int	idx = atoi(opt.c_str());
			if (idx > 7)
				std::cout << "Error: out of range index!" << std::endl;
			else if (idx >= count)
				std::cout << "Error: empty slot!" << std::endl;
			else
				ctcts[idx].getInfo();
		}
	}
	return ctcts[1];
}
