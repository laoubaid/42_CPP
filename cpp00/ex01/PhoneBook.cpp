/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:49:18 by laoubaid          #+#    #+#             */
/*   Updated: 2024/10/04 17:23:07 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook	obj;
	std::string	cmd;

	while (std::cout << ">> " && std::getline(std::cin, cmd).good())
	{
		if (cmd == "ADD")
			obj.addContact();
		else if (cmd == "SEARCH")
			obj.search();
		else if (cmd == "EXIT")
		{
			std::cout << "exiting ..." << std::endl;
			return 1;
		}
	}
}


