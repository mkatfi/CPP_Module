/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:06:44 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/14 15:27:29 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	// std::cout << "AMateria Default Contructor called" << std::endl;
	this->type = "Default";
}

AMateria::AMateria(std::string const & type)
{
    // std::cout << "AMateria Copy constructor called" << std::endl;
	this->type = type;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

AMateria::~AMateria()
{
    // std::cout << "AMateria Destructor called" << std::endl;
}

AMateria::AMateria(AMateria const &other)
{
	*this = other;
}

AMateria& AMateria::operator=(AMateria const & other)
{
    // std::cout << "AMateria Copy Assignment Operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

void    AMateria::use( ICharacter& target )
{
    std::cout << "AMateria " << this->type << " used on " << target.getName() << std::endl;
}