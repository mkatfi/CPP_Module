/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:46:30 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/26 18:17:55 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

int main()
{
   ScavTrap c2("MAX");
    c2.attack("FOLan");
    c2.takeDamage(9);
    c2.beRepaired(5);
    c2.attack("FOOOOOOO"); 
}