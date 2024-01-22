/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:09:09 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/21 22:36:30 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
    // std::cout<<"constractor is called\n";
}

Intern::Intern( const Intern& src )
{
    // std::cout<<"copie constractor is called\n";
    *this = src;
}

Intern::~Intern()
{

    // std::cout<< "destractor is called\n";
}

Intern& Intern::operator=(const Intern& rhs)
{
    (void) rhs;
    return (*this);
}

int Intern::check_num(std::string name)
{
    std::string formNames[3] =
    {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };

    for (int i = 0; i < 3; i++ )
    {
        if ( name == formNames[i] )
        {
            return i + 1;
        }
    }
    return 0;
}

AForm*   Intern::makeForm( std::string name, std::string target )
{
    int i = check_num(name);
     
    AForm* form = NULL;

    switch (i)
    {
        case 1:
            form = new RobotomyRequestForm(target);
            std::cout << "Intern creates " << name << std::endl;
            break;
        case 2:
            form = new PresidentialPardonForm(target);
            std::cout << "Intern creates " << name << std::endl;
            break;
        case 3:
            form = new ShrubberyCreationForm(target);
            std::cout << "Intern creates " << name << std::endl;
            break;
        default:
            std::cout << "Intern cannot create " << name << " form" << std::endl;
            break;
    }
    return form;
}
