/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fun.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:43:39 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/27 10:03:40 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fun.hpp"

Base * generate(void)
{
    // Generate a random value between 0 and 2
    int randomValue = rand() % 3;

    if (randomValue == 0)
        return new A;
    else if (randomValue == 1)
        return new B;
    else
        return new C;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown Type" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A pa =  dynamic_cast<A &>(p);
        std::cout << "A\n";
    }catch(const std::exception &e)
    {}

    try
    {
        B pb =  dynamic_cast<B &>(p);
        std::cout << "B\n";
    }
    catch(const std::exception& e)
    {}

    try
    {
        C pc =  dynamic_cast<C &>(p);
        std::cout << "C\n";
    }
    catch(const std::exception& e)
    {}

}
