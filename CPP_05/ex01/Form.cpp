/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 23:25:08 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/22 14:34:17 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _gradeToSign(1), _gradeToExec(1)
{
     // std::cout<<"constractor is called\n";
}

Form::Form(const std::string &name, int gradeToSign, int gradeToExec) : _name(name),
    _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
    this->_signed = false;

    if (gradeToSign < 1 || gradeToExec < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExec > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &src) : _name(src._name),
    _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec)
{
    // std::cout<<"Copy assignment operator is called\n";
    this->_signed = src._signed;
}

Form::~Form()
{
     // std::cout<< "destractor is called\n";
}

/* ------------------------------- Oprator = ------------------------------- */

Form &Form::operator=(const Form &rhs)
{
    if (this != &rhs)
        this->_signed = rhs._signed;

    return (*this);
}

/* --------------------------------- Getters -------------------------------- */

std::string Form::getName() const { return this->_name; }
bool Form::getSigned() const { return this->_signed; }
int Form::getGradeToSign() const { return this->_gradeToSign; }
int Form::getGradeToExec() const { return this->_gradeToExec; }

/* --------------------------------- Others --------------------------------- */

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw Form::GradeTooLowException();
    this->_signed = true;
}

/* ------------------------------- Exceptions ------------------------------- */

const char *Form::GradeTooHighException::what() const throw()
{
    return ("grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("grade too low");
}

/* ------------------------------- Oprator << ------------------------------- */


std::ostream &operator<<(std::ostream &output, Form const &obj)
{
    output << "Form " << obj.getName() << ", signed: " << obj.getSigned()
      << ", grade to sign: " << obj.getGradeToSign()
      << ", grade to execute: " << obj.getGradeToExec() << std::endl;

    return output;
}

