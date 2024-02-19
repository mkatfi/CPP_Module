/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 20:14:11 by mkatfi            #+#    #+#             */
/*   Updated: 2024/02/11 13:29:51 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"


int main(int ac, char** av)
{
    try{
        if (ac != 2)
            throw   std::logic_error("Error: could not open file.");
        Bitcoin bitcoin;
        bitcoin.read_input(av[1]);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << '\n';
        return (1);
    }

    return 0;
}
