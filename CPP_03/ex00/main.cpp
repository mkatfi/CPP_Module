/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:46:30 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/07 23:02:00 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main()
{
    ClapTrap c2("MAX");
  
    c2.attack("BOB");
    c2.takeDamage(9);
    c2.beRepaired(5);
    c2.attack("BOB1");
    c2.takeDamage(9);
    c2.attack("BOB1");
}