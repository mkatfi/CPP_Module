/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:27:19 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/01 16:01:17 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class   Fixed
{
private:
    int a;
    static const int b; 

public:
    Fixed();
    Fixed(Fixed & old);
    Fixed&  operator=(const Fixed& rhs);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif