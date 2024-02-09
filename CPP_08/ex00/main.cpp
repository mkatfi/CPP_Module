/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:08:05 by mkatfi            #+#    #+#             */
/*   Updated: 2024/02/08 13:19:22 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

// int main()
// {
//     try
//     {
//         int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//         std::vector<int> vect(arr, arr + 10);
//         easyfind(vect, 1);
//         std::list<int> list(arr, arr + 10);
//         easyfind(list, 8);
//     }
//     catch (const std::exception& e)
//     {
//         std::cerr << "Error : " << e.what() << std::endl;
//     }
// }

int main()
{
    try
    {
        std::vector<int> arr;
        arr.push_back(1);
        arr.push_back(2);
        arr.push_back(3);
        arr.push_back(4);
        arr.push_back(5);
        easyfind(arr, 2);
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
