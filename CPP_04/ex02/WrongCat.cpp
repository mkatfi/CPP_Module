/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:18:57 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/11 21:18:58 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat 🐱";
	std::cout << "WrongCat ==>Default Contructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &old): WrongAnimal(old)
{
    std::cout << "WrongCat ==>Copy constructor called" << std::endl;
    *this = old;
}

WrongCat& WrongCat::operator=(const WrongCat &opWrongCat)
{
    std::cout << "WrongCat ==>Copy Assignment Operator called" << std::endl;
	this->type = opWrongCat.type;
	return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat ==>Destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << " 🐈 ==>🐱meow meow meow !!! " << std::endl;
}