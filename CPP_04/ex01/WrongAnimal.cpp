/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:18:42 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/11 21:41:50 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
	std::cout << "WrongAnimal Default Contructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &old)
{
	std::cout << "WrongAnimal Copy Contructor called" << std::endl;
	*this = old;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &op)
{
	std::cout << "WrongAnimal Copy Assingment operator called" << std::endl;
	this->type = op.type;
	return(*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}


void WrongAnimal::makeSound(void) const
{
	std::cout << "no Sound specified !!\n";
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}