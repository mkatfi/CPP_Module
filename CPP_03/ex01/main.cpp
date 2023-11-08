/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:46:30 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/08 18:55:57 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap c2("CHAAYBYA");
  
    c2.attack("KABOUR");
    c2.takeDamage(20);
    c2.takeDamage(20);
    c2.takeDamage(9);
    
    c2.beRepaired(5);
    c2.attack("BOB1");
    c2.takeDamage(9);
    c2.attack("BOB1");

    return 0;
}