/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:20:57 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/21 17:57:25 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
private:
    std ::string name;
public:
    void announce( void );
    void setName(std ::string name);
    Zombie();
    Zombie(std::string name);
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif