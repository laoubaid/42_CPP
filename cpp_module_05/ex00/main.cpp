/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 08:48:49 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/16 12:14:06 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void construction_test(int grd){
    try {
        Bureaucrat test2("test", grd);
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

int main()
{
    construction_test(0);
    construction_test(152);

    try {
        Bureaucrat brcrt1("one", 3);
        Bureaucrat brcrt2("two", 148);
        
        
        std::cout << "\t---------------" << std::endl;
        
        
        std::cout << brcrt1 << std::endl;
        std::cout << brcrt2 << std::endl;
        brcrt1.upGrade();
        brcrt2.downGrade();
        
        std::cout << "\t---------------" << std::endl;
        
        std::cout << brcrt1 << std::endl;
        std::cout << brcrt2 << std::endl;
        brcrt1.upGrade();
        brcrt2.downGrade();
        
        std::cout << "\t---------------" << std::endl;
        
        std::cout << brcrt1 << std::endl;
        std::cout << brcrt2 << std::endl;
        brcrt1.upGrade();
        brcrt2.downGrade();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
