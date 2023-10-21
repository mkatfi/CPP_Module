/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:59:17 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/21 18:55:14 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void    Harl::warning( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month.\n";
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

Harl::Harl()
{
}

Harl::~Harl()
{
}
void    Harl::complain( std:: string level ) 
{
    void (Harl::*funcs[4])() = 
    {
        &Harl::debug, 
        &Harl::info, 
        &Harl::warning, 
        &Harl::error 
    };
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4 && levels[i].compare(level))
        i++ ;
    if (i < 4)
        (this->*funcs[i])();
}