/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:21:01 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/13 20:45:43 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return (0);
    Zombie* ptr = new Zombie[N];
    for(int i = 0; i < N ; i++)
        ptr[i].setName(name);
    return(ptr);
}