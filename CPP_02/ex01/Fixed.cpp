/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:12:14 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/02 14:48:51 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

std::ostream& operator<<(std::ostream &output, const Fixed& rhs) 
{
    output << rhs.toFloat();
    return output;
}

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    FixPoint = 0;
}

Fixed::Fixed(int i) 
{
    FixPoint = i << NumFlotingPoint;
    std::cout << "Int constructor called\n";
}

Fixed::Fixed(float j) 
{
    FixPoint = roundf(j * (1 << NumFlotingPoint));
    std::cout << "Float constructor called\n";
}

Fixed&  Fixed::operator=(const Fixed& rhs)
{
    std::cout << "Copy assignment operator called\n";
    
    this->FixPoint = rhs.getRawBits();
    return *this;
}

Fixed::Fixed(const Fixed& old)
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
    return FixPoint;
}

void Fixed::setRawBits(int const raw)
{
    FixPoint = raw;
}
float Fixed::toFloat( void ) const
{
    float i;
    i = float(FixPoint) / 256;
    return(i);
}
int Fixed::toInt( void ) const
{
    int i;
    i = int(FixPoint) / 256;
    return(i);
}