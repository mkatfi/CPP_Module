/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:10:43 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/02 15:44:09 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

Point::Point( void ) : _x(0), _y(0) 
{
     // std::cout << "Default constructor called\n";
}

Point::Point( const float x, const float y ) : _x(x), _y(y) 
{
     // std::cout << "constructor called\n";
}

Point::Point( const Point &src ) : _x(src._x), _y(src._y) 
{
  // std::cout << "Copy constructor called\n";
}

Point::~Point() 
{
   // std::cout << "Destructor called\n";
}

Point&  Point::operator=( const Point &rhs ) 
{
    if ( this != &rhs ) 
    {
        ( Fixed ) this->_x = rhs.getX();
        ( Fixed ) this->_y = rhs.getY();
    }
    return *this;
}

Fixed Point::getX( void ) const 
{
    return this->_x;
}

Fixed Point::getY( void ) const 
{
    return this->_y;
}