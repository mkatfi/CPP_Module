/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:16:11 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/29 18:24:28 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <cstdlib>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int *mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    /*----------------------------------------*/
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     std::cout <<"Numbers["<<i<<"]    ="<< numbers[i] << std::endl;
    //     std::cout <<"Mirror["<<i<<"]    ="<< mirror[i] << std::endl;
    // }
    /*----------------------------------------*/
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}

// int main()
// {
//     Array<int> intArray(5);
//     for (unsigned int i = 0; i < intArray.size(); ++i)
//     {
//         intArray[i] = i * 2;
//     }

//     Array<int> copyIntArray = intArray;

//     intArray[2] = 100;

//     std::cout << "Original Array: ";
//     for (unsigned int i = 0; i < intArray.size(); ++i)
//     {
//         std::cout << intArray[i] << " ";
//     }
//     std::cout << std::endl;

//     std::cout << "Copied Array: ";
//     for (unsigned int i = 0; i < copyIntArray.size(); ++i)
//     {
//         std::cout << copyIntArray[i] << " ";
//     }
//     std::cout << std::endl;
//     return 0;
// }
