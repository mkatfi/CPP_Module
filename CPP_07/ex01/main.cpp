/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:16:00 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/29 18:28:43 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int inttArray[] = {1, 9, 7, 4, 5, 8};
    double doubleArray[] = {1.4, 2.5, 3.8, 4.1, 5.9, 6.7};

    std::cout << "array of integers [inttArray]: ";
    iter(inttArray, 2, &PrintElement);
    std::cout << std::endl;

    // Test with doubles

    std::cout << "array of double [doubleArray]: ";
    iter(doubleArray, 4, PrintElement);
    std::cout << std::endl;

    return 0;
}
