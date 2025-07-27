/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 08:50:00 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/20 14:20:17 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): grade_(150), name_("Default") {}

Bureaucrat::Bureaucrat(std::string name, int grd): name_(name)
{
    if (grd < 1)
        throw GradeTooHighException();
    else if (grd > 150)
        throw GradeTooLowException();
    grade_ = grd;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj):grade_(obj.grade_), name_(obj.name_) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
    if (this != &obj)
        this->grade_ = obj.grade_;

    return *this;
}

Bureaucrat::~Bureaucrat()
{
}

int Bureaucrat::getGrade() const {
    return grade_;
}

std::string Bureaucrat::getName() const {
    return name_;
}

void Bureaucrat::upGrade() {
    try {
        if (grade_ == 1)
            throw GradeTooHighException();
        grade_--;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

void Bureaucrat::downGrade() {
    try {
        if (grade_ == 150)
            throw GradeTooLowException();
        grade_++;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

void    Bureaucrat::signForm(AForm& form) const {
    try {
        form.beSigned(*this);
        std::cout << name_ << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << name_ << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void        Bureaucrat::executeForm(AForm const& form) {
    try {
        form.execute(*this);
        std::cout << name_ << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << name_ << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "[!] The Grade is too High Exception.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "[!] The Grade is too Low Exception.";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj) {
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return out;
}

