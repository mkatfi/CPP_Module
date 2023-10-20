/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:44:52 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/12 16:10:52 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
private:
        std ::string Name;
public:
    void announce( void );
    Zombie();
    Zombie(std::string name);
    ~Zombie();
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);
#endif