/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:09:46 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/07 02:06:30 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
   public:
      ScavTrap();
      ScavTrap(std::string Name);
      ScavTrap(const ScavTrap &old);
      ScavTrap& operator=(const ScavTrap &rhs);
      ~ScavTrap();
      void guardGate();
      void    attack(std::string const& target);

};
#endif