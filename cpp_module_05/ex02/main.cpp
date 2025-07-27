/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 08:48:49 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/20 14:30:36 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void simulation(int brcrt_grd, AForm* form)
{
    Bureaucrat b("bureaucrat", brcrt_grd);
    std::cout << "\n\t------------- SIMULATION -------------\n" << std::endl;

    std::cout << "--------------------------------------------" << std::endl;
    b.signForm(*form);
    std::cout << "--------------------------------------------" << std::endl;
    b.executeForm(*form);
    std::cout << "--------------------------------------------" << std::endl;
    form->execute(b);
}

int main()
{
    int grade = 26;
    ShrubberyCreationForm   shrubbery("tree");
    RobotomyRequestForm     robotomy("some_dude");
    PresidentialPardonForm  pardon("Yohan");
    try {
        simulation(grade, &shrubbery);
        simulation(grade, &robotomy);
        simulation(grade, &pardon);
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
