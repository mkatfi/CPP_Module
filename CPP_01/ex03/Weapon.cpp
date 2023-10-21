/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 21:46:52 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/21 18:37:25 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& weaponName) 
{
    type = weaponName;
}

Weapon::~Weapon()
{
    // std::cout<<type<<": Weapon Destructer Called"<<std::endl;
}

void Weapon::setType(std ::string cl)
{
    type = cl;
}

const std::string& Weapon::getType()
{
    return (type);
}