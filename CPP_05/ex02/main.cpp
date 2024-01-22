/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 23:45:28 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/22 18:28:52 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

int main()
{
    std::cout << "TEST 1)==>" << std::endl;
    try
    {
        Bureaucrat a("Gon", 26);

        ShrubberyCreationForm b("ZZZ");
        RobotomyRequestForm c("bulma");
        PresidentialPardonForm d("korallin");

        std::cout << std::endl;
        a.signAForm(b);
        a.executeForm(b);

    std::cout << std::endl;
        a.signAForm(c);
        a.executeForm(c);

    std::cout << std::endl;
        a.signAForm(d);
        a.executeForm(d);

    }
    catch (std::exception &e)
    {
        std::cout << RED << "Exception: " << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;

    /* ------------------------------------ */

    // std::cout << "* TEST 2)==>"<< std::endl;
    // try {
    //     Bureaucrat bur("Gon", 145);

    //     ShrubberyCreationForm b("yoryo");
    //     RobotomyRequestForm c("korabika");
    //     PresidentialPardonForm d("kilwa");

    //     std::cout << std::endl;
    //     bur.signAForm(b);
    //     bur.executeForm(b);

    //     std::cout << std::endl;
    //     bur.signAForm(c);
    //     bur.executeForm(c);

    //     std::cout << std::endl;
    //     bur.signAForm(d);
    //     bur.executeForm(d);

    // } catch (std::exception &e) {
    //     std::cout << RED << "Exception: " << e.what() << RESET << std::endl;
    // }
    // std::cout << std::endl;

    return 0;
}
