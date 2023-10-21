/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:21:01 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/21 18:00:04 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return (NULL);
    Zombie* ptr = new Zombie[N];
    if (!ptr)
        return (NULL);
    for(int i = 0; i < N ; i++)
        ptr[i].setName(name);
    return(ptr);
}