/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:33:32 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/25 15:13:19 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <limits>
#include <stdlib.h>
#include <cfloat>
#include <cmath>

class ScalarConverter
{
private:
    static int i_Varg;
    static float f_Varg;
    static double d_Varg;
    static char c;

    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter(const ScalarConverter& oth);
    ScalarConverter& operator=(const ScalarConverter& oth);

public:

    /*----------------------------the types-------------------------------------*/

    static int isChar(std::string arg);
    static int isInt(const std::string& arg);
    static int isFloatorDouble(const std::string& arg);

    /*----------------------------the nan nanf----------------------------------*/

    static int Pseudo(const std::string& arg);

    /*---------------------Others-----------------------------------------------*/

    static void display(const double& x, const std::string& arg);
    static void convert(const std::string& arg);
};

#endif
