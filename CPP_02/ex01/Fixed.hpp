/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:50:19 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/02 14:49:06 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class   Fixed
{
private:
    int FixPoint;
    static const int NumFlotingPoint = 8;

public:
    Fixed();
    Fixed(const Fixed&  old);
    Fixed(int i);
    Fixed(float j);
    ~Fixed();
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat( void ) const;
    int     toInt( void ) const;
    Fixed&  operator=(const Fixed& rhs);
};

std::ostream&  operator<<(std::ostream &output, const Fixed& rhs);


#endif