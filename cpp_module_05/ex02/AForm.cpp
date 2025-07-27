/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:14:05 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/20 20:29:33 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name_("Default"), sign_grd_(150),\
     exec_grd_(150), is_signd_(false) {}

AForm::AForm(std::string name, int sign, int exec):\
     name_(name), sign_grd_(sign), exec_grd_(exec), is_signd_(false)
{
        if (sign < 1 || exec < 1)
            throw GradeTooHighException();
        if (sign > 150 || exec > 150)
            throw GradeTooLowException();
}

AForm::AForm(const AForm& obj):\
     name_(obj.name_), sign_grd_(obj.sign_grd_), exec_grd_(obj.exec_grd_), is_signd_(obj.is_signd_) {}

AForm& AForm::operator=(const AForm& obj) {
    if (this != &obj)
        this->is_signd_ = obj.is_signd_;

    return *this;
}

AForm::~AForm()
{
}


/* getters */

std::string AForm::getName() const {
    return name_;
}

int         AForm::getSigningGrd() const {
    return sign_grd_;
}

int         AForm::getExecutionGrd() const {
    return exec_grd_;
}

bool        AForm::getSignatureState() const {
    return is_signd_;
}

void        AForm::beSigned(const Bureaucrat& obj) {
    if (obj.getGrade() > this->sign_grd_)
        throw GradeTooLowException();
    is_signd_ = true;
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "[!] The Grade is too High Exception.";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "[!] The Grade is too Low Exception.";
}

const char* AForm::FormNotSignedException::what() const throw() {
    return "[!] This Form has not been Signed.";
}

void    AForm::execute(Bureaucrat const & executor) const {
    if (!is_signd_)
        throw FormNotSignedException();
    if (executor.getGrade() > this->exec_grd_)
        throw GradeTooLowException();
    executeAction();
}

std::ostream& operator<<(std::ostream& out, const AForm& obj) {
    out << "Form informations:\n";
    out << "\tName: " << obj.getName() << "\n";
    out << "\tRequired grade to sign: " << obj.getSigningGrd() << "\n";
    out << "\tRequired grade to execute: " << obj.getExecutionGrd() << "\n";
    if (obj.getSignatureState())
        out << "\t[!] This form has been signed!" << std::endl;
    else
        out << "\t[!] This form hasn't been signed yet!" << std::endl;
    return out;
}
