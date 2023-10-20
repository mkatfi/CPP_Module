/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:52:38 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/15 21:53:12 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include<iostream>
#include<string>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon* _weapon; 
public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    // void setHumanB(std ::string n);
    void setWeapon(Weapon& weapon);
    std::string getHumanB();
};




#endif