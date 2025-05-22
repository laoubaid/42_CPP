/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:51:55 by laoubaid          #+#    #+#             */
/*   Updated: 2024/12/22 22:46:47 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

Contact::Contact()
{
	first_name = "empty";
	last_name = "empty";
	nickname = "empty";
	darkest_secret = "empty";
	phone_number = "empty";
}

Contact::~Contact()
{
}

void	Contact::getInfo()
{
	std::cout << "\tfirst name    \t:\t" << this->first_name << std::endl;
	std::cout << "\tlast name     \t:\t" << this->last_name << std::endl;
	std::cout << "\tnickname      \t:\t" << this->nickname << std::endl;
	std::cout << "\tdarkest secret\t:\t" << this->darkest_secret << std::endl;
	std::cout << "\tphone number  \t:\t" << this->phone_number << std::endl;
}

bool isPrintable(std::string &str)
{
	for (std::size_t i = 0; i < str.length(); i++)
	{
		if (!std::isprint(str.at(i)))
			return false;
	}
	return true;
}

int	Contact::setInfo()
{
	Contact tmp;
	tmp.first_name = first_name;
	tmp.last_name = last_name;
	tmp.nickname = nickname;
	tmp.darkest_secret = darkest_secret;
	tmp.phone_number = phone_number;
    std::cout << std::endl << "---> Enter the following information : " << std::endl << std::endl;
	do
	{
		std::cout << "\tfirst name\t:\t";
		if (!std::getline(std::cin, first_name).good() || !isPrintable(first_name))
			return (this->setBack(tmp));
	} while (!first_name.length());
	do
	{
		std::cout << "\tlast name\t:\t";
		if (!std::getline(std::cin, last_name).good() || !isPrintable(last_name))
			return (this->setBack(tmp));
	} while (!last_name.length());
	do
	{
		std::cout << "\tnickname \t:\t";
		if (!std::getline(std::cin, nickname).good() || !isPrintable(nickname))
			return (this->setBack(tmp));
	} while (!nickname.length());
	do
	{
		std::cout << "\tdarkest secret\t:\t";
		if (!std::getline(std::cin, darkest_secret).good() || !isPrintable(darkest_secret))
			return (this->setBack(tmp));
	} while (!darkest_secret.length());
	do
	{
		std::cout << "\tphone number\t:\t";
		if (!std::getline(std::cin, phone_number).good() || !isPrintable(phone_number))
			return (this->setBack(tmp));
	} while (!phone_number.length());
    std::cout << std::endl;
	return 0;
}

int	Contact::setBack(const Contact& tmp)
{
	first_name = tmp.first_name;
	last_name = tmp.last_name;
	nickname = tmp.nickname;
	darkest_secret = tmp.darkest_secret;
	phone_number = tmp.phone_number;
	return 1;
}

std::string formatOutput(std::string &str)
{
	if (str.length() < 10)
		return std::string(10 - str.length(), ' ') + str;
	else
		return str.substr(0, 9) + ".";
}

void	Contact::affColums(int idx)
{
	std::cout << "         "  << idx << "|";
	std::cout << formatOutput(first_name) << "|";
	std::cout << formatOutput(last_name) << "|";
	std::cout << formatOutput(nickname) << std::endl;
}
