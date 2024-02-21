/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:19:12 by mkatfi            #+#    #+#             */
/*   Updated: 2024/02/21 22:52:58 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cstdlib>
#include <map>
#include <iomanip>



class Bitcoin
{
	private:
		 std::map<std::string, double> myMap;
		//  double first;
	public:
		Bitcoin();
		~Bitcoin();
		Bitcoin(const Bitcoin& other);
    	Bitcoin&   operator=(const Bitcoin& other);

		void read_input(std::string infile);
		void read_line(std::string line);
		void check_date(std::string date, std::string bad);
		int check_digit_data(std::string date, std::string bad);
		std::string is_float(std::string str);
		void print_line(std::string date, std::string value, std::string bad);
		int check_pipe(std::string line, char c);
		int is_space_value(std::string str);
};

#endif

