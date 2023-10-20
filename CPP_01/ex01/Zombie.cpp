/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:20:51 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/13 20:42:32 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie :: Zombie ()
{
    //  std ::cout <<   "The structor is called ==>\n";
}

Zombie :: ~Zombie()
{
    std ::cout << Name <<   ":The destructor is called \n";
}

void Zombie::announce( void )
{
    std :: cout << Name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie :: setName(std ::string name)
{
    Name = name;
}