/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:08:07 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/21 10:47:48 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    // std::cout<<"constractor is called\n";
}
PresidentialPardonForm::~PresidentialPardonForm()
{
     // std::cout<< "destractor is called\n";
}
PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    // std::cout<<" Parameterized constructor is called\n";
    this->_target = target;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) :AForm(src)
{
    // std::cout<<"Copy assignment operator is called\n";
    this->_target = src._target;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    this->_target = rhs._target;

    return (*this);
}

/* --------------------------------- Others --------------------------------- */

void PresidentialPardonForm::execute(Bureaucrat const & executor)const
{
   if ( executor.getGrade() > this->getGradeToExec() )
        throw AForm::GradeTooLowException();
    else {
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}
