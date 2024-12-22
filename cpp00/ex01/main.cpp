/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:51:33 by laoubaid          #+#    #+#             */
/*   Updated: 2024/12/22 22:44:45 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	obj;
	std::string	cmd;

	while (true)
	{
		std::cout << ">> ";
		if (!std::getline(std::cin, cmd).good() || !isPrintable(cmd))
			return (std::cout << "\nError: exiting ..." << std::endl, 1);
		else if (cmd == "ADD")
			obj.addContact();
		else if (cmd == "SEARCH")
			obj.search();
		else if (cmd == "EXIT")
		{
			std::cout << "exiting ..." << std::endl;
			return 1;
		}
		else
			std::cout << cmd << " : invalid command use ADD, SEARCH or EXIT" << std::endl;
	}
}
