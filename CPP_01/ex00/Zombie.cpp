/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:52:02 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/21 17:50:24 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie ()
{
}
Zombie :: Zombie (std::string Name)
{
    name = Name;
}

Zombie :: ~Zombie()
{
    std ::cout << name <<   ":The destructor is called \n";
}

void Zombie::announce( void )
{
    std :: cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
