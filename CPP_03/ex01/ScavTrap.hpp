/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:09:46 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/26 18:12:47 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include<iostream>
#include<string>

class ScavTrap : public ClapTrap
{
public:
   ScavTrap();
   ScavTrap(std::string Name);
   ScavTrap(const ScavTrap &old);
   ~ScavTrap();
   void guardGate();
};
#endif