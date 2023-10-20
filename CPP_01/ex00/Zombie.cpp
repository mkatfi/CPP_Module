/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:52:02 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/13 11:36:30 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie ()
{}
Zombie :: Zombie (std::string name)
{
    Name = name;
}

Zombie :: ~Zombie()
{
    std ::cout << Name <<   ":The destructor is called \n";
}

void Zombie::announce( void )
{
    std :: cout << Name << ": BraiiiiiiinnnzzzZ...\n";
}
