
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    //std::cout << "Default constructor called\n";
}
DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name ), FragTrap( name ), ScavTrap( name )
{
    this->_name = name; 
    ClapTrap::Name = name + "_clap_name";
    FragTrap::HitPoint = 100;
    ScavTrap::EnergyPoint = 50;
    FragTrap::AttackDamage = 30;
    
    std::cout << " DiamondTrap ==> " <<  this->_name  << " constructed called." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
    // std::cout << "Copy assignment operator called\n";
      this->Name = rhs.Name;
      this->HitPoint = rhs.HitPoint;
      this->EnergyPoint = rhs.EnergyPoint;
      this->AttackDamage = rhs.AttackDamage;
      return(*this);
}

DiamondTrap::~DiamondTrap() 
{
    std::cout << " DiamondTrap ==>" <<  this->_name  << " is dead." << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI( void ) 
{
    std::cout << "I am a DiamondTrap named " <<  this->_name  << ", ClapTrap name: " << ClapTrap::Name << std::endl;
}

