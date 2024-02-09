/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:08:09 by mkatfi            #+#    #+#             */
/*   Updated: 2024/02/05 15:44:55 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template < typename T >
void    easyfind( T& container, int value )
{
    if (std::find( container.begin(), container.end(), value ) != container.end())
        std::cout << "Found : " << value << std::endl;
    else
    {
        throw std::runtime_error("Value not found in container");
    }
}

#endif
