/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:07:20 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/21 18:21:29 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include<iostream>
#include<string>

class  Weapon
{
private:
    std::string type;
public:
    Weapon(const std::string& weaponName);
    ~Weapon();
    const std::string& getType();
    void setType(std::string cl);
};

#endif