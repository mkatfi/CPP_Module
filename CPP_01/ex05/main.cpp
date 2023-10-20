/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:20:19 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/18 18:48:30 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main() 
{

    std::string input;
    Harl        harl;

    while(1)
    {
        std::cout << "Enter a level: ";
        std::cin >> input;
        harl.complain(input);
        if(input.compare("exit"))
            break;
    }
    return(0);
}
