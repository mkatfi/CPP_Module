/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:08:23 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/21 11:53:36 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    // std::cout<<"constractor is called\n";
}
RobotomyRequestForm::~RobotomyRequestForm()
{
     // std::cout<< "destractor is called\n";
}
RobotomyRequestForm::RobotomyRequestForm( const std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    // std::cout<<" Parameterized constructor is called\n";
    this->_target = target;
}
RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &src): AForm(src)
{
    // std::cout<<"Copy assignment operator is called\n";

    this->_target = src._target;
}
RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &rhs)
{
    this->_target = rhs._target;

    return (*this);
}

/* --------------------------------- Others --------------------------------- */

void RobotomyRequestForm::execute(Bureaucrat const & executor)const
{
    if ( executor.getGrade() > this->getGradeToExec() )
        throw AForm::GradeTooLowException();
    else {
        srand(time(NULL));
        int nume = rand();
        if (nume % 2 == 0)
            std::cout << "BZZZZZT! " << _target << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomy failed! " << _target << " is still alive." << std::endl;
    }
}
