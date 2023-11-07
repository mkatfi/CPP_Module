/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:20:17 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/07 02:12:10 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap()
{
      
}
ClapTrap::ClapTrap(std::string name)
{
      Name = name;
      HitPoint = 10;
      EnergyPoint= 10;
      AttackDamage= 0;
    // std::cout << "Default constructor called\n";
}
ClapTrap::ClapTrap(const ClapTrap &old)
{
      // std::cout << "Copy constructor called\n";
      *this = old;
}
ClapTrap&  ClapTrap::operator=(const ClapTrap &rhs)
{
      // std::cout << "Copy assignment operator called\n";
      this->Name = rhs.Name;
      this->HitPoint = rhs.HitPoint;
      this->EnergyPoint = rhs.EnergyPoint;
      this->AttackDamage = rhs.AttackDamage;
      return(*this);
}
ClapTrap::~ClapTrap()
{
      // std::cout << "Destructor called\n";
}
void ClapTrap::attack( const std::string& target)
{
      if (this->HitPoint > 0 && this->EnergyPoint > 0)
      {
            std::cout << " ClapTrap "  << Name << " attacks "  << target <<" causing " << AttackDamage <<  " points of damage!\n";
            this->EnergyPoint--;    
      }
}
void ClapTrap::takeDamage(unsigned int amount)
{
      if (this->HitPoint > 0 && this->EnergyPoint > 0)
      {
            this->HitPoint = this->HitPoint - amount;
      }
}
void ClapTrap::beRepaired(unsigned int amount)
{
      if (this->HitPoint > 0 && this->EnergyPoint > 0)
      {
            this->HitPoint = this->HitPoint + amount;
            this->EnergyPoint--;
      }
}