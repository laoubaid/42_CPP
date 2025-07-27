/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 08:53:35 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/20 20:24:10 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_

# include <iostream>
# include "Form.hpp"
# include <stdexcept>

class Form;

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

        void        signForm(Form& obj) const;
};

std::ostream& operator<< (std::ostream& out, const Bureaucrat& obj);

#endif
