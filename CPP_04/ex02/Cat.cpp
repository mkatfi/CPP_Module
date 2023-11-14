/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:10:19 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/13 00:32:18 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	std::cout << "Cat ==>Default Contructor called" << std::endl;
    this->type = "Cat 🐱";
    this->BrainCat = new Brain();
}

Cat::Cat(const Cat &old): AAnimal(old)
{
    std::cout << "Cat ==>Copy constructor called" << std::endl;
    this->BrainCat = new Brain();
    *this = old;
}

Cat& Cat::operator=(const Cat &opCat)
{
    std::cout << "Cat ==>Copy Assignment Operator called" << std::endl;
	this->type = opCat.type;
    *(this->BrainCat) = *(opCat.BrainCat);
	return (*this);
}

Cat::~Cat()
{
    delete this->BrainCat;
    std::cout << "Cat ==>Destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << " 🐈 ==>🐱meow meow meow " << std::endl;
}
