/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:17:05 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/06 17:52:43 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

const int Fixed::b = 8;

Fixed&  Fixed::operator=(const Fixed& rhs)  
{
    std::cout << "Copy assignment operator called\n";
    
    this->a = rhs.getRawBits(); 
    return *this;
}

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    a = 0;
}
Fixed::Fixed(const Fixed & old)
{
    std::cout << "Copy constructor called\n";
    *this = old;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return a;
}

void Fixed::setRawBits(int const raw)
{
    a = raw;
}