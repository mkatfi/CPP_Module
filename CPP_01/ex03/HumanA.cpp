/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:05:32 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/21 18:35:34 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{}

HumanA::~HumanA()
{
    return;
}
std::string HumanA::gethumanA()
{
    return (name);
}
void HumanA::attack()
{
    std :: cout << gethumanA() << " attacks with their " << weapon.getType() << std::endl;
}