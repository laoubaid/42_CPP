/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:51:48 by laoubaid          #+#    #+#             */
/*   Updated: 2024/12/22 22:45:25 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool isPrintable(std::string &str);

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact();
        ~Contact();
        void	getInfo();
		int		setInfo();
		int		setBack(const Contact& tmp);
		void	affColums(int idx);
};