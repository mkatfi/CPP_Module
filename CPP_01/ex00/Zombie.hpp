/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:44:52 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/21 17:54:50 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    void announce( void );
    Zombie();
    Zombie(std::string name);
    ~Zombie();
};

void randomChump(std::string Name);
Zombie* newZombie(std::string Name);
#endif