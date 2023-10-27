/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:26:50 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/25 12:57:49 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"
#include <cmath>
Fixed::Fixed()
{
    // std::cout << "Default constructor called\n";
    FixPoint = 0;
}

Fixed::Fixed(int i) 
{
    FixPoint = i << NumFlotingPoint;
    // std::cout << "Int constructor called\n";
}

Fixed::Fixed(float j) 
{
    FixPoint = roundf(j * 256);
    // std::cout << "Float constructor called\n";
}

Fixed::Fixed( const Fixed & old)
{
    // std::cout << "Copy constructor called\n";
    *this = old;
}
Fixed::~Fixed()
{
    // std::cout << "Destructor called\n";
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

Fixed&  Fixed::operator=(const Fixed& rhs)
{
    // std::cout << "Copy assignment operator called\n";
    
    this->FixPoint = rhs.getRawBits();
    return *this;
} 

// .....................comparison operato.......

bool Fixed::operator==(const Fixed& rhs) const 
{
    return (this->FixPoint == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed& rhs) const 
{
    return (this->FixPoint != rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed& rhs) const 
{
    return (this->FixPoint <= rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed& rhs) const 
{
    return (this->FixPoint >= rhs.getRawBits());
}

bool Fixed::operator<(const Fixed& rhs) const 
{
    return (this->FixPoint < rhs.getRawBits());
}

bool Fixed::operator>(const Fixed& rhs) const 
{
    return (this->FixPoint > rhs.getRawBits());
}
//..................increment/decrement......

Fixed&  Fixed::operator++()
{  
    ++this->FixPoint;
    return (*this);
}

Fixed  Fixed::operator++(int)
{  
    Fixed tem = *this;
    
    FixPoint++;
    return (tem);
}
Fixed&  Fixed::operator--()
{  
    --this->FixPoint;
    return (*this);
}

Fixed  Fixed::operator--(int)
{  
    Fixed tem = *this;
    
    FixPoint--;
    return (tem);
}

//..............arithmetic operator.........

Fixed  Fixed::operator-(const Fixed& rhs) const
{  
    Fixed   res;

    res.FixPoint = this->getRawBits() - rhs.getRawBits();
    return (res);
}

Fixed  Fixed::operator+(const Fixed& rhs) const
{
    Fixed   res;

    res.FixPoint = this->getRawBits() + rhs.getRawBits();
    return (res);
}

Fixed  Fixed::operator*(const Fixed& rhs) const
{
    Fixed   res;

    res.FixPoint = (float)this->getRawBits() / 256 * rhs.getRawBits();
    return (res);
}

Fixed  Fixed::operator/(const Fixed& rhs) const
{
    Fixed   res;

    res.FixPoint = (float)this->getRawBits() / rhs.getRawBits() * 256;
    return (res);
}

// ........................................
std::ostream& operator<<(std::ostream &output, const Fixed& rhs) 
{
    output << rhs.toFloat();
    return output;
}

// .................static member function...........

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return(a);
    return(b);
}
const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return(a);
    return(b);
}
Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return(a);
    return(b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return(a);
    return(b);
}