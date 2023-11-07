/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:26:24 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/02 13:09:02 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class   Fixed
{
private:
    int FixPoint;
    static const int NumFlotingPoint = 8; 

public:
    Fixed();
    Fixed(const Fixed & old);
    Fixed(int i);
    Fixed(float j);
    ~Fixed();
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat( void ) const;
    int     toInt( void ) const;
    Fixed&  operator=(const Fixed& rhs);
    Fixed&  operator++();
    Fixed   operator++(int);
    Fixed   operator--(int);
    Fixed&  operator--();
    bool operator==(const Fixed& rhs) const;
    bool operator!=(const Fixed& rhs) const;
    bool operator<=(const Fixed& rhs) const;
    bool operator>=(const Fixed& rhs) const;
    bool operator<(const Fixed& rhs) const;
    bool operator>(const Fixed& rhs) const;
    Fixed  operator-(const Fixed& rhs) const;
    Fixed  operator+(const Fixed& rhs) const;
    Fixed  operator*(const Fixed& rhs) const;
    Fixed  operator/(const Fixed& rhs) const;
    static Fixed&  min(Fixed &a, Fixed &b);
    static Fixed&  max(Fixed &a, Fixed &b);
    static const Fixed&    min(const Fixed &a, const Fixed &b);
    static const Fixed&    max(const Fixed &a, const Fixed &b);
};
std::ostream&  operator<<(std::ostream &output, const Fixed& rhs);

#endif