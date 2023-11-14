/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:10:40 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/13 00:37:39 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default Contructor called" << std::endl;
    type = "Animal";
}

Animal::Animal(const Animal &old)
{
	std::cout << "Animal Copy Contructor called" << std::endl;
	*this = old;
}

Animal& Animal::operator=(const Animal &op)
{
	std::cout << "Animal Copy Assingment operator called" << std::endl;
	this->type = op.type;
	return(*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}


void Animal::makeSound(void) const
{
	std::cout << "no Sound specified !!\n";
}

std::string Animal::getType(void) const
{
	return this->type;
}