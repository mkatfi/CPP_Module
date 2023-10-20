/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:07:20 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/15 16:28:35 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include<iostream>
#include<string>

class  Weapon
{
private:
        std::string Club;
public:
    Weapon(const std::string& weaponName);
    ~ Weapon();
    std::string getType();
    void setType(std :: string cl);
    
};

#endif