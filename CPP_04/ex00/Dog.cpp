/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:10:53 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/12 21:43:09 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog 🐶";
	std::cout << "Dog -->Default Contructor called" << std::endl;
}

Dog::Dog(const Dog &old) : Animal(old)
{
    std::cout << "Dog -->Copy constructor called" << std::endl;
    *this = old;
}

Dog& Dog::operator=(const Dog &opDog)
{
    std::cout << "Dog -->Copy Assignment Operator called" << std::endl;
	this->type = opDog.type;
	return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog -->Destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << " 🐕 -->🐶hoow hoow hoow !!" << std::endl;
}