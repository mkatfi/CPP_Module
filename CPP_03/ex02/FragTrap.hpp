/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:09:46 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/07 02:10:56 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{   
public:
   FragTrap();
   FragTrap(std::string Name);
   FragTrap(const FragTrap &old);
   FragTrap& operator=(const FragTrap& rhs);
   ~FragTrap();
   
   void highFivesGuys(void);
};
#endif