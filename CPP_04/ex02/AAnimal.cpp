/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:10:40 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/11 14:04:13 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal Default Contructor called" << std::endl;
    type = "AAnimal";
}

AAnimal::AAnimal(const AAnimal &old)
{
	std::cout << "AAnimal Copy Contructor called" << std::endl;
	*this = old;
}

AAnimal& AAnimal::operator=(const AAnimal &op)
{
	std::cout << "AAnimal Copy Assingment operator called" << std::endl;
	this->type = op.type;
	return(*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return this->type;
}