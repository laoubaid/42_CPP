/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:38:39 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/20 14:14:26 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

void    SetSeed()
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string trgt):\
     AForm("RobotomyRequestForm", 72, 45) ,target_(trgt)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj):\
     AForm(obj), target_(obj.target_) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
    if (this != &obj)
        AForm::operator=(obj);
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void    RobotomyRequestForm::executeAction() const {
    timeval tm;

    gettimeofday(&tm, NULL);

    std::cout << "BZZZZZZZZZZ... DRILLING NOISES..." << std::endl;

    if (tm.tv_usec % 2 == 0)
        std::cout << target_ << " has been robotomized successfully!" << std::endl;
    else
        std::cout << target_ << "robotomization failed!" << std::endl;
}
