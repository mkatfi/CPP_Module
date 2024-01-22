/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:09:19 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/21 22:21:55 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern
{

public:
    Intern();
    ~Intern();
    Intern( const Intern& src );
    Intern& operator=( const Intern& rhs );

    int check_num(std::string name);
    AForm *makeForm(std::string name, std::string target);
};

#endif
