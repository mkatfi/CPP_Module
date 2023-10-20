/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:05:32 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/15 21:52:34 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
    return;
}
// void HumanA::sethumanA(std::string n)
// {
//    _name = n;
// }
std::string HumanA::gethumanA()
{
    return (_name);
}
void HumanA::attack()
{
    std :: cout << gethumanA() << " attacks with their " << _weapon.getType() << std :: endl;
}