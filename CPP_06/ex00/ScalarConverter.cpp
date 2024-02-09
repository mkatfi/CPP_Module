/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:33:39 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/26 20:33:40 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int ScalarConverter::i_Varg = 0;
float ScalarConverter::f_Varg = 0;
double ScalarConverter::d_Varg = 0;
char ScalarConverter::c = '0';

ScalarConverter::ScalarConverter()
{
	// std::cout<<"ScalarConverter: Defult Constructor Called\n";
}

ScalarConverter::ScalarConverter(const ScalarConverter& oth)
{
	// std::cout<<"ScalarConverter: Copy Constructor Called\n";
	*this = oth;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& oth)
{
	// std::cout<<"ScalarConverter: Copy Assignment Called\n";

    (void)oth;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	// std::cout<<"ScalarConverter: Destructor Called\n";
}
/*-----------------------------the types--------------------------------------------------*/

int ScalarConverter::isChar(std::string arg)
{
	if (arg.size() != 1 || std::isdigit(arg[0]))
		return 0;
	return 1;
}

int ScalarConverter::isInt(const std::string& arg)
{
	size_t i = 0;

	if (i < arg.length() && (arg[i] == '-' || arg[i] == '+'))
		i++;
	while (i < arg.length())
    {
		if (!std::isdigit(arg[i++]))
			return (0);
	}
	return (1);
}

int ScalarConverter::isFloatorDouble(const std::string& arg)
{
	size_t i = 0;
	int FF = 0;
	int NOUT = 0;

	while (arg[i] == ' ')
			i++;
	if (i < arg.size() && (arg[i] == '-' || arg[i] == '+'))
		i++;
	if (arg[i] == '.')
		return 0;
	if (arg[arg.size() - 1] == 'f')
		FF = 1;
	while (i < arg.size() - FF)
    {
		if (!std::isdigit(arg[i]))
        {
			if (NOUT || arg[i] != '.' || i == arg.size()-(FF+1))
			{
				return 0;
			}
            if (arg[i] == '.')
			    NOUT += 1;
		}
		i++;
	}
	return NOUT;
}
/*---------------------------Others---------------------------------------------------*/

void ScalarConverter::display(const double& x, const std::string& arg)
{
	if (x < 0 && x > 255)
		std::cout<<"char: "<<"impossible"<<"\n";
	else if (std::isprint(c))
		std::cout<<"char: \'"<< c <<"\'\n";
	else
		std::cout<<"char: "<<"Non displayable"<<"\n";

	if (x > std::numeric_limits<int>::max() || x < std::numeric_limits<int>::min())
		std::cout<<"int: impossible\n";
	else
		std::cout<<"int: "<<i_Varg<<"\n";

	if (isFloatorDouble(arg) && static_cast<long>(x) != x)
	{
		std::cout<<"float: "<<f_Varg<<"f\n";
		std::cout<<"double: "<<d_Varg<<"\n";
	}
	else if (isChar(arg))
	{
		std::cout<<"float: "<<f_Varg<<".0f\n";
		std::cout<<"double: "<<d_Varg<<".0\n";
	}
	else
	{
		std::cout<<"float: "<<x<<".0f\n";
		std::cout<<"double: "<<x<<".0\n";
	}
}

int ScalarConverter::Pseudo(const std::string& arg)
{
	if (arg == "nan" || arg == "nanf")
    {
		std::cout<<"char: impossible\n"<<"int: impossible\n";
		std::cout<<"float: nanf\n"<<"double: nan\n";
		return 1;
	}
	if (arg == "-inff" || arg == "+inff")
    {
		std::cout<<"char: impossible\n"<<"int: "<<arg[0]<<"inf"<<"\n";
		std::cout<<"float: "<<arg<<"\n"<<"double: "<<arg[0]<<"inf"<<"\n";
		return 1;
	}
	if (arg == "-inf" || arg == "+inf")
    {
		std::cout<<"char: impossible\n"<<"int: "<<arg<<"\n";
		std::cout<<"float: "<<arg<<"f\n"<<"double: "<<arg<<"\n";
		return 1;
	}
	return 0;
}

void ScalarConverter::convert(const std::string& arg)
{
	if (Pseudo(arg) == 1)
		return ;
	if (isChar(arg))
    {
		c = arg[0];
		i_Varg = static_cast<int>(c);
		f_Varg = static_cast<float>(c);
		d_Varg = static_cast<double>(c);
		display(1,arg);
		return ;
	}
	if (isInt(arg))
    {
		i_Varg = atoi(arg.c_str());
		c = static_cast<char>(i_Varg);
		f_Varg = static_cast<float>(i_Varg);
		d_Varg = static_cast<double>(i_Varg);
	}
	else if (isFloatorDouble(arg))
    {
		if (arg[arg.length()-1] == 'f')
        {
			f_Varg = strtod(arg.c_str(), NULL);
			c = static_cast<char>(f_Varg);
			i_Varg = static_cast<int>(f_Varg);
			d_Varg = static_cast<double>(f_Varg);
		}
		else
        {
			d_Varg = strtod(arg.c_str(), NULL);
			c = static_cast<char>(d_Varg);
			i_Varg = static_cast<int>(d_Varg);
			f_Varg = static_cast<float>(d_Varg);
		}
	}
	else
    {
		std::cout<<"char: impossible\n"<<"int: impossible\n";
		std::cout<<"float: impossible\n"<<"double: impossible\n";
		return ;
	}
	display(strtod(arg.c_str(),NULL), arg);
}
