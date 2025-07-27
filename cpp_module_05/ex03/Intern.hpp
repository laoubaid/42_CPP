/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:06:26 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/20 15:48:52 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    private:
        static const std::string forms[3];
    public:
        Intern();
        Intern(const Intern& obj);
        Intern& operator=(const Intern& obj);
        ~Intern();
        
        AForm*  makeForm(std::string f_name_, std::string f_trgt_);
};
