/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 08:48:49 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/20 20:16:19 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void construction_test(int grd_s_, int grd_x_){
    try {
        Form f("test", grd_s_, grd_x_);
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

int main()
{
    construction_test(0, 1);
    construction_test(151, 1);
    construction_test(150, 0);
    construction_test(150, 151);

    std::cout << "\t---------------" << std::endl;
    
    try {
        Form test("War_form", 1, 1);
        
        std::cout << test << std::endl;
        
        std::cout << "\t---------------" << std::endl;
        
        Bureaucrat b1("Captain", 1);
        Bureaucrat b2("Soldier", 49);
        
        b1.signForm(test);
        b2.signForm(test);
	//test.beSigned(b2);
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
