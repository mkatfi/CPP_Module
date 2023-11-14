/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:10:19 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/11 14:47:53 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat()
{
    this->type = "Cat 🐱";
	std::cout << "Cat ==>Default Contructor called" << std::endl;
}

Cat::Cat(const Cat &old): Animal(old)
{
    std::cout << "Cat ==>Copy constructor called" << std::endl;
    *this = old;
}

Cat& Cat::operator=(const Cat &opCat)
{
    std::cout << "Cat ==>Copy Assignment Operator called" << std::endl;
	this->type = opCat.type;
	return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat ==>Destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << " 🐈 ==>🐱meow meow meow !!! " << std::endl;
}