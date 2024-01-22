/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 23:46:41 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/22 18:31:07 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void )
{
    try{

        Intern  someRandomIntern;
        AForm*   rrf;
        Bureaucrat br("test", 5);
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        br.signAForm(*rrf);
        br.executeForm(*rrf);
        std::cout<< std::endl;

        AForm*   ob2;
        ob2 = someRandomIntern.makeForm("presidential pardon", "koralin");
        br.signAForm(*ob2);
        br.executeForm(*ob2);
        std::cout << std::endl;

        AForm*   ob1;
        ob1 = someRandomIntern.makeForm("shrubbery creation", "Zoldig");
        br.signAForm(*ob1);
        br.executeForm(*ob1);
        std::cout << std::endl;

        delete ob1;
        delete rrf;
        delete ob2;

    } catch (std::exception &e)
    {
        std::cout << RED << "Exception: " << e.what() << RESET << std::endl;
    }

    return 0;
}
