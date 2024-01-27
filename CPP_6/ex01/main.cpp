/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:20:12 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/27 10:02:14 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main(){
    Data ptr1;
    ptr1.x = 9;

    // Serialize the address of the Data object
    uintptr_t raw = Serializer::Serialize(&ptr1);
    std::cout << std::endl;
    std::cout<<"raw  =  "<< raw << std::endl;
    std::cout<<"&ptr1=  "<<(uintptr_t)&ptr1<<std::endl;
    std::cout<<"x    =  "<< ptr1.x<<std::endl;

    // Deserialize the serialized value

    Data *ptr2 = Serializer::deserialize(raw);
    if (&ptr1 == ptr2)
    {
        std::cout <<"***************************\n";
        std::cout<<"&ptr2=  "<< (uintptr_t)ptr2<<std::endl;
        std::cout<<"x    =  "<< ptr2->x<<std::endl;
    }
}
