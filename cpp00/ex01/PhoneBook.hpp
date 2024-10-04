/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:40:22 by laoubaid          #+#    #+#             */
/*   Updated: 2024/10/02 17:46:29 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Header.hpp"

bool isNumeric(std::string &str)
{
	for (std::size_t i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str.at(i)))
			return false;
	}
	return !str.empty();
}

class PhoneBook
{
	private:
		Contact	ctcts[8];
		int		idx;
		int		count;
	public:
		PhoneBook();
		~PhoneBook();

		int			getIdx(){return idx;};
		void		addContact();
		Contact&	getContact(int i);
		Contact&	search();
};

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

#endif