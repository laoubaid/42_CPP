/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:46:40 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/20 15:51:45 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const std::string Intern::forms[3] = {
    "shrubbery creation",
    "robotomy request",
    "presidential pardon"
};

Intern::Intern() {}

Intern::Intern(const Intern& obj) {
    (void)obj;
}

Intern& Intern::operator=(const Intern& obj) { 
    (void)obj;
    return *this;
}

Intern::~Intern() {}

AForm*  Intern::makeForm(std::string f_name_, std::string f_trgt_) {
    int     i;

    i = 0;
    while (i < 3 && f_name_ != forms[i])
        i++;
    if (i < 3)
        std::cout << "Intern creates " << f_name_ << std::endl;
    switch (i) {
        case 0:
            return new ShrubberyCreationForm(f_trgt_);
        case 1:
            return new RobotomyRequestForm(f_trgt_);
        case 2:
            return new PresidentialPardonForm(f_trgt_);
        case 3:
            std::cout << "couldn't create " << f_name_ << " because it doesnt exists."<< std::endl;
    }
    return NULL;
}
