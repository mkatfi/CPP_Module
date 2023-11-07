/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:10:35 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/02 15:44:57 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//Area A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2) ] / 2 

Fixed   abs(Fixed x) 
{
    if (x < 0)
        return x * -1;
    return x;
}

Fixed   area( Point const a, Point const b, Point const c ) 
{
    return ( ( ( a.getX() * ( b.getY() - c.getY() ) ) + ( b.getX() * ( c.getY() - a.getY() ) ) + ( c.getX() * ( a.getY() - b.getY() ) ) ) / 2 );
}

bool bsp( Point const a, Point const b, Point const c, Point const point) 
{
    Fixed   abcArea = abs(area( a, b, c ));
    Fixed   pabArea = abs(area( point, a, b ));
    Fixed   pbcArea = abs(area( point, b, c ));
    Fixed   pcaArea = abs(area( point, c, a ));

    return  ( abcArea == pabArea + pbcArea + pcaArea );
}