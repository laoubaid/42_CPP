/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:51:42 by laoubaid          #+#    #+#             */
/*   Updated: 2024/12/22 22:45:34 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
	private:
		int index;
		int count;
		Contact contacts[8];
	public:
		PhoneBook();
		~PhoneBook();

		int			getIdx();
		void		addContact();
		Contact&	getContact(int i);
		void	search();
};

#endif