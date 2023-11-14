/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:10:59 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/11 14:11:41 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP
#include "Animal.hpp"

class Dog : public Animal
{
    public:
    Dog();
    ~Dog();
    Dog (const Dog &old);
    Dog& operator=(const Dog &opDog);
    void makeSound()const;
};

#endif