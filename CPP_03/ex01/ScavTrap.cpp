/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:09:42 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/26 18:16:11 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    
}
ScavTrap::ScavTrap(std::string Name)
{
    Name = name;
    HitPoint = 100;
    EnergyPoint= 50;
    AttackDamage= 20;
     // std::cout << "Default constructor called\n";
}
ScavTrap::ScavTrap(const ScavTrap &old)
{
    // std::cout << "Copy constructor called\n";
    *this = old;
}
ScavTrap::~ScavTrap()
{
    // std::cout << "Destructor called\n";
}
void ScavTrap::guardGate()
{
     std::cout << " ClapTrap "  << Name << " attacks "  << target <<" causing " << AttackDamage <<  " points of damage!\n";
}