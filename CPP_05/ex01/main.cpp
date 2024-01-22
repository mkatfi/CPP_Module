/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 23:25:19 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/22 18:29:22 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    std::cout << "* TEST 1)==>" << std::endl;
    try
    {
        Bureaucrat bur("abd salam", 7);
        Form form("TX13", 9, 6);
        bur.signForm(form);
    }
    catch (std::exception &e)
    {
        std::cout << RED << "Exception: " << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;

/* -------------------------------*************------------------------------- */

    std::cout << "* TEST 2)==>"<< std::endl;
    try {
        Bureaucrat bur("Gon", 3);
        Form form("FIVE18", 2, 1);
        bur.signForm(form);
    } catch (std::exception &e) {
       std::cout << RED << "Exception: " << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;

/* -------------------------------*************------------------------------- */

    std::cout << "* TEST 3)==>" << std::endl;
    try {
        Bureaucrat bur("Talis", 70);
        Form form("TC37", 151, 5);
        bur.signForm(form);
    } catch (std::exception &e) {
        std::cout << RED << "Exception: " << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;

    return 0;
}

