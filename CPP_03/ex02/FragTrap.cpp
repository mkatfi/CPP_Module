#include "FragTrap.hpp"

FragTrap::FragTrap()
{

}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->HitPoint = 100;
    this->AttackDamage = 100;
    this->EnergyPoint = 50;
}

FragTrap::FragTrap(const FragTrap &old): ClapTrap(old)
{
    *this = old;
}
FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
    // std::cout << "Copy assignment operator called\n";
      this->Name = rhs.Name;
      this->HitPoint = rhs.HitPoint;
      this->EnergyPoint = rhs.EnergyPoint;
      this->AttackDamage = rhs.AttackDamage;
      return(*this);
}

FragTrap::~FragTrap()
{
    // std::cout << " destractore is called\n";
}

void FragTrap::highFivesGuys(void)
{
    if (this->HitPoint > 0 && this->EnergyPoint > 0) 
    {
        std::cout << " FragTrap " << this->Name << " high fives everybody." << std::endl;
        this->EnergyPoint -= 1;
    }
}