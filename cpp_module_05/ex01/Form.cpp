/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:14:05 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/20 20:29:09 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int sign, int exec):\
     name_(name), sign_grd_(sign), exec_grd_(exec), is_signd_(false)
{
        if (sign < 1 || exec < 1)
            throw GradeTooHighException();
        if (sign > 150 || exec > 150)
            throw GradeTooLowException();
}

Form::Form(const Form& obj):\
     name_(obj.name_), sign_grd_(obj.sign_grd_), exec_grd_(obj.exec_grd_), is_signd_(obj.is_signd_) {}

Form& Form::operator=(const Form& obj) {
    if (this != &obj)
        this->is_signd_ = obj.is_signd_;

    return *this;
}

Form::~Form()
{
}


/* getters */

std::string Form::getName() const {
    return name_;
}

int         Form::getSigningGrd() const {
    return sign_grd_;
}

int         Form::getExecutionGrd() const {
    return exec_grd_;
}

bool        Form::getSignatureState() const {
    return is_signd_;
}

void        Form::beSigned(const Bureaucrat& obj) {
    if (obj.getGrade() > this->sign_grd_)
        throw GradeTooLowException();
    is_signd_ = true;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "[!] The Grade is too High Exception.";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "[!] The Grade is too Low Exception.";
}

std::ostream& operator<<(std::ostream& out, const Form& obj) {
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
