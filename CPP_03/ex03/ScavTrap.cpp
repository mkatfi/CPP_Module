/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:09:42 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/07 02:18:02 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap::ScavTrap()
{}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    this->HitPoint = 100;
    this->EnergyPoint= 50;
    this->AttackDamage= 20;
     // std::cout << "Default constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &old)  : ClapTrap(old)
{
    // std::cout << "Copy constructor called\n";
    *this = old;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
    // std::cout << "Copy assignment operator called\n";
     this->Name = rhs.Name;
      this->HitPoint = rhs.HitPoint;
      this->EnergyPoint = rhs.EnergyPoint;
      this->AttackDamage = rhs.AttackDamage;
      return(*this);
}

ScavTrap::~ScavTrap()
{
    // std::cout << "Destructor called\n";
}

// void ScavTrap::guardGate()
// {
//      std::cout << " ClapTrap "  << Name << " attacks "  << target <<" causing " << AttackDamage <<  " points of damage!\n";
// }

void    ScavTrap::attack( std::string const& target ) 
{
    if (this->HitPoint > 0 && this->EnergyPoint > 0) 
    {
        std::cout << " ScavTrap " << this->Name << " attacks " << target << " at range, causing " << this->AttackDamage << " points of damage !" << std::endl;
        this->EnergyPoint -= 1;
    }
}

void    ScavTrap::guardGate() 
{
    std::cout << " ScavTrap =>  " << this->Name << " is now in Gate keeper mode." << std::endl;
}