/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:36:23 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/20 14:15:52 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string trgt):\
     AForm("PresidentialPardonForm", 25, 5) ,target_(trgt)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj):\
     AForm(obj), target_(obj.target_) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj) {
    if (this != &obj)
        AForm::operator=(obj);

    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void    PresidentialPardonForm::executeAction() const {
    std::cout << target_ << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
