/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:43:09 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/18 22:44:15 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main( int ac, char **av ) 
{

    std::string input = av[1];
    Harl        harl;
    
    if (ac != 2) 
    {
        return (std::cout << "Usage: ./harlFilter \"level\"\n", EXIT_FAILURE);
    }
    harl.complain(input);
    return (0);
}