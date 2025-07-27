/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 08:48:49 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/20 16:02:41 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

void simulation(int brcrt_grd, AForm* form)
{
    if (!form)
        throw std::runtime_error("Exception: Null pointer!");
    Bureaucrat b("bureaucrat", brcrt_grd);
    std::cout << "\n================================== SIMULATION==================================\n" << std::endl;

    b.signForm(*form);
    std::cout << "--------------------------------------------" << std::endl;
    b.executeForm(*form);
    std::cout << "--------------------------------------------" << std::endl;
    form->execute(b);
}

int main()
{
    int grade = 5;
    Intern slave;

    try {
        simulation(grade, slave.makeForm("shrubbery creation", "tree"));
        simulation(grade, slave.makeForm("robotomy request", "some_dude"));
        simulation(grade, slave.makeForm("presidential pardon", "Yohan"));
        simulation(grade, slave.makeForm("test form", "test"));
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
