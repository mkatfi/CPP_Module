/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 23:23:44 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/20 19:53:21 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    // std::cout<<"constractor is called\n";
}
Bureaucrat::~Bureaucrat()
{
    // std::cout<<"destractor is called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat&other) : name(other.name)
{
    // std::cout<<"copie constractor is called\n";
    if (other.grade < 1)
        throw GradeTooHighException();
    else if (other.grade > 150)
        throw GradeTooLowException();
    this->grade = other.grade;
    *this = other;
}

Bureaucrat::Bureaucrat(const std::string& _name, int _grade) : name(_name)
{
    // std::cout<<"Paramitraze constractor is called\n";
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
    grade = _grade;
}

/* ------------------------------- Oprator = ------------------------------- */

Bureaucrat &Bureaucrat::operator=(const Bureaucrat&other)
{
    // std::cout<<"Copy assignment operator is called\n";

    this->grade = other.grade;
    return(*this);
}

/* ------------------------------- Exceptions ------------------------------- */

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade is too high!");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low!");
}

/* ------------------------------- Operator << ------------------------------- */

std::ostream& operator<<(std::ostream &output, const Bureaucrat& rhs)
{
    output << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return output;
}

/* --------------------------------- Getters -------------------------------- */

const std::string& Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

/*-------------------------------function (++ ; --) ------------------------*/

void Bureaucrat::incrementGrade()
{
    if (grade > 1)
        grade--;
    else
        throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    if (grade < 150)
        grade++;
    else
        throw GradeTooLowException();
}
