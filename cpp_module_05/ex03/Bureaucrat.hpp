/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 08:53:35 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/20 20:24:04 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_

# include <iostream>
# include "AForm.hpp"
# include <stdexcept>

class AForm;

class Bureaucrat
{
    private:
        int                 grade_;
        const std::string   name_;

    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grd);
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator=(const Bureaucrat& obj);
        ~Bureaucrat();
        
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        

        std::string getName() const;
        int         getGrade() const;

        void        upGrade();
        void        downGrade();

        void        signForm(AForm& obj) const;
        void        executeForm(AForm const& form);
};

std::ostream& operator<< (std::ostream& out, const Bureaucrat& obj);  

#endif
