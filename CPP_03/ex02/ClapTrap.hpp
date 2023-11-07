/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:14:08 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/07 02:05:52 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>
#include<string>

class ClapTrap
{
protected:
    std::string Name;
    unsigned int HitPoint;
    unsigned int EnergyPoint;
    unsigned int AttackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &old);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap& operator=(const ClapTrap &rhs);
};

#endif