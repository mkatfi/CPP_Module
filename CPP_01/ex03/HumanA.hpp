/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:45:44 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/15 21:53:05 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon& _weapon; 

public:
    HumanA(std::string name, Weapon& weapon);
    void attack();
    // void sethumanA(std ::string n);
    std::string gethumanA();
    ~HumanA();
};

#endif
