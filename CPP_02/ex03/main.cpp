/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:09:58 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/02 15:44:35 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

int main () 
{
    if ( bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 15) ) == true )
        std::cout << "Point is in the triangle" << std::endl;
    else 
        std::cout << "Point is not in the triangle" << std::endl;
    return 0;
}