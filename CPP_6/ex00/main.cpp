/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:33:27 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/23 21:33:31 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout<< "\nPlease Enter One Argument Next Time !!!\n\n";
        return 0;
    }
    ScalarConverter::convert(av[1]);
}
