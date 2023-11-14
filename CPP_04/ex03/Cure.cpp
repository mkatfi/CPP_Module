/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:09:53 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/14 15:27:53 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") 
{
	// std::cout << "cure Default Contructor called" << std::endl;
}

Cure& Cure::operator=(Cure const &obj)
{
    // std::cout << "cure Copy Assignment Operator called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

Cure::Cure(Cure const & other) : AMateria("cure")
{
    // std::cout << "cure Copy constructor called" << std::endl;
    *this = other;
}

Cure::~Cure()
{
    // std::cout << "cure Destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void    Cure::use( ICharacter& target )
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
