/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:20:51 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/21 17:58:37 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie :: Zombie ()
{
}

Zombie :: ~Zombie()
{
    std ::cout << name <<   ":The destructor is called \n";
}

void Zombie::announce( void )
{
    std :: cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie :: setName(std ::string name)
{
    this->name = name;
}