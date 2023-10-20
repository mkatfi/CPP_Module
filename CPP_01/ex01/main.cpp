/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:20:48 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/13 20:46:28 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
    int N;
    std :: string name;

    N = 7;
    name =  "nullptr";
    Zombie *heod = zombieHorde(N, name);
    if (!heod)
        return (0);
    for (int i = 0; i < N ; i++)
        heod[i].announce();
    delete[] heod;
}