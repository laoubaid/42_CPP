/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:51:38 by laoubaid          #+#    #+#             */
/*   Updated: 2024/12/22 22:45:03 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0), count(0) {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::addContact()
{
	if (contacts[index].setInfo())
	{
		std::cout << "\nError: exiting ..." << std::endl;
		exit(1);
	}
	index++;
	if (count < 8)
		count++;
	if (index == 8)
		index = 0;
}

int PhoneBook::getIdx()
{
    return index;
}

Contact& PhoneBook::getContact(int i)
{
    return contacts[i];
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

void	PhoneBook::search()
{
	std::string opt;

    std::cout << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
	for (int i = 0; i < count; i++){
		contacts[i].affColums(i);
	}
    std::cout << "-------------------------------------------" << std::endl << std::endl;
	while (true)
	{
		std::cout << "enter index : ";
		if (!std::getline(std::cin, opt).good() || !isPrintable(opt))
		{
			std::cout << "\nError: exiting ..." << std::endl;
			exit(1);
		}
		else if (!isNumeric(opt))
			std::cout << "Error: invalid index!" << std::endl;
		else
			break;
	}
	int	idx = atoi(opt.c_str());
	if (idx > 7)
		std::cout << "Error: out of range index!" << std::endl;
	else if (idx >= count)
		std::cout << "Error: empty slot!" << std::endl;
	else
	{
		std::cout << "------------------- info ------------------" << std::endl;
		contacts[idx].getInfo();
		std::cout << "-------------------------------------------" << std::endl;
	}
    std::cout << std::endl;
}