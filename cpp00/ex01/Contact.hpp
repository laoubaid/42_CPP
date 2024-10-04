/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:42:33 by laoubaid          #+#    #+#             */
/*   Updated: 2024/10/04 17:23:33 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__
#define __CONTACT_HPP__

#include "Header.hpp"

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string dsecret;
		std::string phone_number;  
	public:
		Contact();
		~Contact();
		void	getInfo();
		int		setInfo();
		int		setBack(const Contact& tmp);
		void	affColums(int idx);
};


#endif