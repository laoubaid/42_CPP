/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:35:06 by laoubaid          #+#    #+#             */
/*   Updated: 2024/10/04 23:04:36 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string msg;
	std::string* stringPTR = &msg;
	std::string& stringREF = msg;

	msg = "HI THIS IS BRAIN";
	std::cout << "-----------addresses------------" << std::endl;
	std::cout << "string: " << &msg << std::endl;
	std::cout << "PTR: " << stringPTR << std::endl;
	std::cout << "REF: " << &stringREF << std::endl;
	std::cout << "-------------values-------------" << std::endl;
	std::cout << "string: " << msg << std::endl;
	std::cout << "PTR: " << *stringPTR << std::endl;
	std::cout << "REF: " << stringREF << std::endl;

	return 0;
}
