/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:07:31 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/22 14:48:16 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"


Bureaucrat::Bureaucrat()
{
    // std::cout<<"constractor is called\n";
}
Bureaucrat::~Bureaucrat()
{
    // std::cout<< "destractor is called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat&other)
{
    *this = other;
};

Bureaucrat::Bureaucrat(const std::string& _name, int _grade) : name(_name)
{
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
    grade = _grade;
}
/* ------------------------------- Oprator = ------------------------------- */

Bureaucrat &Bureaucrat::operator=(const Bureaucrat&other)
{
    this->grade = other.grade;
    return(*this);
};

/* ------------------------------- Exceptions ------------------------------- */

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade is too high!");
};

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade is too low!");
};

/* ------------------------------- Oprator << ------------------------------- */

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

/* --------------------------------- Others --------------------------------- */

void Bureaucrat::signAForm(AForm &Aform)
{
    try
    {
        Aform.beSigned(*this);
        std::cout << this->getName() << " signed " << Aform.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << this->getName() << " couldn't sign "
                  << Aform.getName() << " because " << e.what() << " ."
                  << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & Aform)
{
     try
    {
        Aform.execute(*this);
        std::cout << this->getName() << " executed " << Aform.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << this->getName() << " couldn't executed "
                  << Aform.getName() << " because " << e.what() << " ..."
                  << std::endl;
    }
}
