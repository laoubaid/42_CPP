/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:14:01 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/20 20:24:04 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP_
# define _FORM_HPP_

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class Form
{
    private:
        const std::string   name_;
        const int           sign_grd_;
        const int           exec_grd_;
        bool                is_signd_;

    public:
        Form(std::string name, int sign, int exec);
        Form(const Form& obj);
        Form& operator=(const Form& obj);
        ~Form();

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        std::string getName() const;
        int         getSigningGrd() const;
        int         getExecutionGrd() const;
        bool        getSignatureState() const;

        void        beSigned(const Bureaucrat& obj);
};

std::ostream& operator<< (std::ostream& out, const Form& obj);  

#endif
