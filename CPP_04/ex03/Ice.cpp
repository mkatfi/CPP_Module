/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:11:02 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/14 15:28:05 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    // std::cout << "ice Default Contructor called" << std::endl;
}

Ice& Ice::operator=(Ice const &obj)
{
    // std::cout << "ice Copy Assignment Operator called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

Ice::Ice(Ice const & other) : AMateria("ice")
{
    // std::cout << "ice Copy constructor called" << std::endl;
    *this = other;
}

Ice::~Ice()
{
    // std::cout << "cure Destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}