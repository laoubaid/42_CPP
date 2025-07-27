/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
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

class AForm
{
    private:
        const std::string   name_;
        const int           sign_grd_;
        const int           exec_grd_;
        bool                is_signd_;

    public:
        AForm();
        AForm(std::string name, int sign, int exec);
        AForm(const AForm& obj);
        AForm& operator=(const AForm& obj);
        ~AForm();

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class FormNotSignedException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        std::string getName() const;
        int         getSigningGrd() const;
        int         getExecutionGrd() const;
        bool        getSignatureState() const;

        void        beSigned(const Bureaucrat& obj);

        void        execute(Bureaucrat const & executor) const;
    private:
        virtual void    executeAction() const = 0;
};

std::ostream& operator<< (std::ostream& out, const AForm& obj);  

#endif
