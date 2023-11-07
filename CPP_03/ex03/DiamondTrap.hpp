
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string _name;

public:
    DiamondTrap();
    DiamondTrap( std::string name );
    ~DiamondTrap();
    DiamondTrap& operator=(const DiamondTrap& rhs);
    using   ScavTrap::attack;
    void    whoAmI( void );
};

#endif