/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:20:22 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/24 18:22:02 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

Serializer::Serializer()
{
    // std::cout<<"Serializer: Defult Constructor Called\n";
}
Serializer::~Serializer()
{
    // std::cout<<"Serializer: Destructor Called\n";
}
Serializer::Serializer(const  Serializer& src)
{
    // std::cout<<"Serializer: Copy Constructor Called\n";
    *this = src;
}
Serializer &Serializer::operator=(const  Serializer& rhs)
{
    // std::cout<<"Serializer: Copy Assignment Called\n";
    (void) rhs;
    return(*this);
}

uintptr_t Serializer::Serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

