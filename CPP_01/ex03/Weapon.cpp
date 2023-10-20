/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 21:46:52 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/15 21:54:27 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
Weapon::Weapon(const std::string& weaponName) 
{
    Club = weaponName;
}

Weapon::~Weapon() 
{
    return ;
}

void Weapon::setType(std ::string cl)
{
   Club = cl;
}
std::string Weapon::getType()
{
    return (Club);
}