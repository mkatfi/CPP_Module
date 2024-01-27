/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:20:26 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/25 12:31:03 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <cstddef>
#include <stdint.h>
#include <iostream>
#include "Data.hpp"

class Serializer
{
    Serializer();
    Serializer(const  Serializer& src);
    Serializer&operator=(const  Serializer& rhs);
    ~Serializer();
public:
    /*---------------------Others---------------------------------------*/

    static uintptr_t Serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif

