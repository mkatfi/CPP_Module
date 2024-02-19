/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:19:16 by mkatfi            #+#    #+#             */
/*   Updated: 2024/02/19 23:52:42 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin()
{
	// std::cout << "constractor is called\n";
	std::string line;
    std::ifstream file("data.csv");
    std::stringstream ss;
    std::string date;
    std::string value;

    if (!file.is_open())
        throw   std::logic_error("Error: data.csv not exist or permission denied!");
    std::getline(file, line);
    while (std::getline(file, line))
    {
        ss << line;
        std::getline(ss, date, ',');
        std::getline(ss, value);
        float val = atof(value.c_str());
        this->myMap.insert(make_pair(date, val));
        ss.clear();
    }
    file.close();
}
Bitcoin::~Bitcoin()
{
	// std::cout << "destractor is called\n";
}

Bitcoin::Bitcoin(const Bitcoin& other)
{
    *this = other;
}

Bitcoin&    Bitcoin::operator=(const Bitcoin& other)
{
    (void)other;
    return (*this);
}
int Bitcoin::check_pipe(std::string line, char c)
{
    size_t cont = 0;
    for (size_t i = 0; i < line.size(); i++)
    {
        if (line[i] == c)
        {
            if (line[i - 1] != ' ' || line[i + 1] != ' ')
                throw   std::logic_error("not a valide number.");
            cont++;
        }
    }
    return (cont);
}
// void Bitcoin::display_map()
// {
//     std::map<std::string, float>::iterator iter = myMap.begin();
//     while (iter != myMap.end())
//     {
//         std::cout << iter->first <<"   "<< iter->second << std::endl;
//         iter++;
//     }
// }
void check_dach(std::string date, std:: string bad)
{
    size_t i = 0;
    size_t cont = 0;
    while (i < date.size())
    {
        if (date[i] == '-')
            cont++;
    }
    if (cont != 2)
        throw   std::logic_error(bad);
}
int Bitcoin::check_digit_data(std::string date, std::string bad)
{
    size_t i = 0;
    while (i < date.size())
    {
        if (!std::isdigit(date[i++]))
            throw   std::logic_error(bad);
    }
    int result;
    std::istringstream iss(date);
    iss >> result;
    return (result);
}
void Bitcoin::check_date(std::string date, std::string bad)
{
    std::string str;
    std::string str1;
    std::string str2;
    std::stringstream ss;
    ss << date;
    std::getline(ss, str ,'-');
    std::getline(ss, str1 ,'-');
    std::getline(ss, str2 , ' ');

    int years  = check_digit_data(str, bad);
    int months = check_digit_data(str1, bad);
    int days   = check_digit_data(str2, bad);
    if (years == 2009)
    {
        if(days < 2  || days > 31)
            throw   std::logic_error(bad);
    }
    if (months >= 1 && months <= 7)
    {
        if (months % 2 == 0)
        {
            if(days < 1 || days > 30)
                throw   std::logic_error(bad);
        }
        else if(days < 1 || days > 31)
            throw   std::logic_error(bad);
    }
    else if (months >= 8 && months <= 12)
    {
        if (months % 2 != 0)
        {
            if(days < 1 || days > 30)
                throw   std::logic_error(bad);
        }
        else if(days < 1 || days > 31)
            throw   std::logic_error(bad);
    }
    if (months < 1 || months > 12)
    {
        throw   std::logic_error(bad);
    }
    else if (months == 2)
    {
        if (years % 4 == 0)
        {
            if (days < 1 || days > 29)
            throw   std::logic_error(bad);
        }
        else if (days < 1 || days > 28)
            throw   std::logic_error(bad);
    }
    if (years < 2009   || years > 9999)
        throw   std::logic_error(bad);

}
std::string    Bitcoin::is_float(std::string str)
{
    int p = 0;
    int plus = 0;
    // int digit = 0;
    std::string characters = "0123456789";
    unsigned int i = 0;

    size_t found = str.find('-');
    if (found!=std::string::npos)
        throw   std::logic_error("not a positive number.");
    while (i < str.size())
    {
        // if(str[i] == ' ')
        // {
        //     if(!std::isdigit(str[i + 1]) && str[i + 1] != ' ' && str[i + 1] != '+')
        //         throw   std::logic_error("not a valide 1 number.");
        // }
        if (str[i] != ' ')
        {
            if (str[i] != '+' && str[i] != '.')
            {
                if (characters.find(str[i]) == std::string::npos)
                    throw   std::logic_error("not a positive number.");
            }
            else if(str[i] == '.')
            {
                p++;
            }
            else if (str[i] == '+')
            {
                if (!std::isdigit(str[i + 1]) || std::isdigit(str[i - 1]))
                    throw   std::logic_error("not a valide 2 number.");
                plus++;
            }
        }
        if (std::isdigit(str[i]) && str[i + 1] == ' ')
        {
            int j = i + 1;
            while (str[j])
            {
                if (str[j] != ' ')
                    throw   std::logic_error("not a valide number.");
                j++;
            }
        }
        i++;
    }
    if (p > 1 || plus > 1)
        throw   std::logic_error("is not a valide number!");
    return (str);
}
void Bitcoin::print_line(std::string date, std::string value , std::string bad)
{
    check_date(date, bad);
    std::string value1;
    value1 = is_float(value);
    std::map<std::string, double>::iterator it = this->myMap.lower_bound(date);
    if(it->first != date)
    {
        if (it != myMap.begin())
            it--;
    }
    double val;
    std::istringstream iss(value1);
    iss >> val;
    if (val > 1000)
        throw   std::logic_error(std::string("too large a number."));
    std::cout << std::setprecision(15) << date << " => " << val << " = " << val * it->second << std::endl;
}
void    Bitcoin::read_line(std::string line)
{
    std::string bad = "bad input => " + line;
    std::string date;
    std::string value;
  	std::stringstream ss;

    ss << line;
	std::getline(ss, date, '|');
    std::getline(ss, value);
    if (line.empty() || check_pipe(line, '|') != 1)
        throw   std::logic_error(bad);
    print_line(date, value, bad);
    ss.clear();
}

void    Bitcoin::read_input(std::string  infile)
{
    std::ifstream   in(infile.c_str());
    std::string     line;

    if (!in.is_open())
	{
		std::string str_error = "Error: No such file or Permission denied : " + infile;
		throw   std::logic_error(str_error);
	}
    std::getline(in, line);
    if (line != "date | value" )
        throw   std::logic_error("you have forgotten < date | value >");
    while (std::getline(in, line))
    {
		try
		{
            read_line(line);
        }
        catch(const std::exception& e)
        {
            std::cout<<"Error: "<<e.what()<<std::endl;
        }
    }
}
