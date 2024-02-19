/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 00:19:02 by mkatfi            #+#    #+#             */
/*   Updated: 2024/02/16 20:35:34 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int c, char **v)
{
    try
    {
        if (c != 2)
            throw   std::logic_error("Error");
        RPN cal;
        cal.RPN_result(v[1]);
    }
    catch(const std::exception& e)
    {
        std::cout<<e.what()<<std::endl;
    }
}
