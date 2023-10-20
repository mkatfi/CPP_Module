/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:52:52 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/15 21:52:20 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
  _name = name;
}

HumanB::~HumanB()
{
    return;
}
// void HumanB::setHumanB(std::string name)
// {
//     _name = name;
// }

std::string HumanB::getHumanB()
{
    return _name;
}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon; 
}

void HumanB::attack()
{
    if (_weapon)
    {
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    }
    else
    {
        std::cout << _name << " attacks with their bare hands!" << std::endl;
    }
}
