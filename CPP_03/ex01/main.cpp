/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:46:30 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/05 18:50:12 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap ash( "ahrach" );
    
    ash.attack( "aomar" );
    ash.takeDamage( 10 );
    ash.beRepaired( 10 );
    ash.guardGate();

    return 0;
}