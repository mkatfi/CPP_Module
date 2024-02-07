/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:15:54 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/29 18:30:07 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, size_t length, void (*funofelement)(T &element))
{
    for (size_t i = 0; i < length; ++i)
    {
        funofelement(arr[i]);
    }
}

template <typename T>
void PrintElement(T &Element)
{
    std::cout << Element << "   ";
}

#endif
