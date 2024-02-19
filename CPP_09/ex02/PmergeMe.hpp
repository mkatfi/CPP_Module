/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 23:18:28 by mkatfi            #+#    #+#             */
/*   Updated: 2024/02/16 10:17:47 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGENE_HPP
#define PMERGENE_HPP

#include<vector>
#include<iostream>
#include<string>
#include <utility>
#include <cstdlib>
#include <limits>
#include <sstream>
#include <algorithm>
#include <sys/time.h>
#include <deque>

void display(std::vector<int> str);
std::vector<int> check_number_insert(int ac, char **av);
std::vector<std::pair<int, int> > Divide_To_Pair(std::vector<int> ver);
std::vector<int> sort_Pair(std::vector<std::pair<int, int> > pairs, bool flag, int tmp);
void for_vector(int ac, char **av);

void display_deque(std::deque<int> str);
std::deque<int> check_number_insert_deque(int ac, char **av);
std::deque<std::pair<int, int> > Divide_To_Pair_deque(std::deque<int> ver);
std::deque<int> sort_Pair_deque(std::deque<std::pair<int, int> > pairs, bool flag, int tmp);
void for_Deque(int ac, char **av);

#endif
