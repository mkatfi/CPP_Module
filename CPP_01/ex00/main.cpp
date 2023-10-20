/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:50:46 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/12 16:09:38 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie j;
    (void)j;
    Zombie p("mkatfi");
    Zombie *ptr = newZombie("kkkk");
    ptr->announce();
    randomChump("marouane");
    delete ptr;
}