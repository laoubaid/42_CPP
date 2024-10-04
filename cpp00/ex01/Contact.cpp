/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:08:56 by laoubaid          #+#    #+#             */
/*   Updated: 2024/10/04 17:24:05 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"
#include "Contact.hpp"

Contact::Contact()
{
	first_name = "undefined!";
	last_name = "undefined!";
	nickname = "undefined!";
	dsecret = "undefined!";
	phone_number = "undefined!";
}

Contact::~Contact()
{
}

void	Contact::getInfo()
{
	std::cout << "first name:\t" << this->first_name << std::endl;
	std::cout << "last name:\t" << this->last_name << std::endl;
	std::cout << "nickname:\t" << this->nickname << std::endl;
	std::cout << "darkest secret:\t" << this->dsecret << std::endl;
	std::cout << "phone number:\t" << this->phone_number << std::endl;
}

int	Contact::setInfo()
{
	Contact tmp;
	tmp.first_name = first_name;
	tmp.last_name = last_name;
	tmp.nickname = nickname;
	tmp.dsecret = dsecret;
	tmp.phone_number = phone_number;
	do
	{
		std::cout << "Insert first name: ";
		if (!std::getline(std::cin, first_name).good())
			return (this->setBack(tmp));
	} while (!first_name.length());
	do
	{
		std::cout << "Insert last name: ";
		if (!std::getline(std::cin, last_name).good())
			return (this->setBack(tmp));
	} while (!last_name.length());
	do
	{
		std::cout << "Insert nickname: ";
		if (!std::getline(std::cin, nickname).good())
			return (this->setBack(tmp));
	} while (!nickname.length());
	do
	{
		std::cout << "Insert the darkest secret: ";
		if (!std::getline(std::cin, dsecret).good())
			return (this->setBack(tmp));
	} while (!dsecret.length());
	do
	{
		std::cout << "Insert phone number: ";
		if (!std::getline(std::cin, phone_number).good())
			return (this->setBack(tmp));
	} while (!phone_number.length());
	return 0;
}

int	Contact::setBack(const Contact& tmp)
{
	first_name = tmp.first_name;
	last_name = tmp.last_name;
	nickname = tmp.nickname;
	dsecret = tmp.dsecret;
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
