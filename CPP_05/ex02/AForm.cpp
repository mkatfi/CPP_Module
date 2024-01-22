/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:07:50 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/21 10:52:37 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _gradeToSign(1), _gradeToExec(1)
{
    // std::cout<<"constractor is called\n";
}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExec) : _name(name),
    _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
    // std::cout<<"Paramitraze constractor is called\n";
    this->_signed = false;

    if (gradeToSign < 1 || gradeToExec < 1)
        throw AForm::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExec > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &src) : _name(src._name),
    _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec)
{
    // std::cout<<"copie constractor is called\n";
    this->_signed = src._signed;
}

AForm::~AForm()
{
    // std::cout<< "destractor is called\n";
}

/* ------------------------------- Oprator = ------------------------------- */

AForm &AForm::operator=(const AForm &rhs)
{
    // std::cout<<"Copy assignment operator is called\n";
    if (this != &rhs)
        this->_signed = rhs._signed;

    return (*this);
}

/* --------------------------------- Getters -------------------------------- */
std::string AForm::getName() const { return this->_name; }
bool AForm::getSigned() const { return this->_signed; }
int AForm::getGradeToSign() const { return this->_gradeToSign; }
int AForm::getGradeToExec() const { return this->_gradeToExec; }

/* --------------------------------- Others --------------------------------- */
void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw AForm::GradeTooLowException();
    this->_signed = true;
}

/* ------------------------------- Exceptions  ------------------------------- */

const char *AForm::GradeTooHighException::what() const throw() {
    return ("grade too high");
}

const char *AForm::GradeTooLowException::what() const throw() {
    return ("grade too low");
}

const char * AForm::FormNotSignedException::what() const throw()
{
    return("Form not signed ");
};

/* ------------------------------- Operator << ------------------------------- */

std::ostream &operator<<(std::ostream &output, AForm const &obj) {
    output << "AForm " << obj.getName() << ", signed: " << obj.getSigned()
      << ", grade to sign: " << obj.getGradeToSign()
      << ", grade to execute: " << obj.getGradeToExec() << std::endl;

    return output;
}
