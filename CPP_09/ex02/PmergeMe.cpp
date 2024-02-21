/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 23:18:32 by mkatfi            #+#    #+#             */
/*   Updated: 2024/02/21 20:24:22 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/*------------------------------ Vector ----------------------------------------*/

void    display(std::vector<int> str)
{
    std::vector<int>::iterator     it;
    std::vector<int>::iterator     eit;

    it = str.begin();
    eit = str.end();
    while (it != eit)
    {
        std::cout<<*(it++);
        if (it != eit)
            std::cout<<" ";
    }
    std::cout<< std::endl;
}

std::vector<int>   check_number_insert(int ac, char**av)
{
    unsigned int MaxNumber = std::numeric_limits<int>::max();

    for (int i = 1; i < ac; i++)
    {
        unsigned int num;
        std::istringstream iss(av[i]);
        iss >> num;

        if (MaxNumber < num)
            throw std::runtime_error("Error : number grand to max!");
        for (int j = 0; av[i][j] != '\0'; j++)
        {
            if (j == 0 && av[i][j] == '+')
                continue;
            else if (!std::isdigit(av[i][j]))
                throw std::runtime_error("Error : Invalid number!");
        }
    }
    std::vector<int> ver;
    for (int k = 1; k < ac; k++)
    {
        if (av[k][0] == '\0')
        {
            throw std::runtime_error("Error : Invalid number!");
        }
        int val = std::atoi(av[k]);
        ver.push_back(val);
    }
    return ver;
}

std::vector<std::pair<int, int> > Divide_To_Pair(std::vector<int>ver)
{
    std::vector<std::pair<int, int> > pairs;
    std::vector<int>::iterator  it;
    it = ver.begin();
    while (it != ver.end() && it != ver.end() - 1)
    {
        pairs.push_back(std::pair<int, int>(*(it++), *(it++)));
    }
    return pairs;
}

std::vector<int> sort_Pair(std::vector<std::pair<int, int> > pairs, bool flag, int tmp)
{
    std::vector<std::pair<int, int> >::iterator pairs_it;
    std::vector<int> grand_numbers;
    std::vector<int> small_numbers;
    pairs_it = pairs.begin();
    while (pairs_it != pairs.end())
    {
        if (pairs_it->first < pairs_it->second)
            std::swap(pairs_it->first, pairs_it->second);
        small_numbers.insert(lower_bound(small_numbers.begin(), small_numbers.end(), pairs_it->second), pairs_it->second);
        grand_numbers.push_back(pairs_it->first);
        pairs_it++;
    }
    std::vector<int>::iterator grand_it;
    grand_it = grand_numbers.begin();
    while(grand_it != grand_numbers.end())
    {
        small_numbers.insert(lower_bound(small_numbers.begin(), small_numbers.end(), *grand_it), *grand_it);
        grand_it++;
    }
    if (flag)
        small_numbers.insert(lower_bound(small_numbers.begin(), small_numbers.end(), tmp), tmp);
    return (small_numbers);
}

void for_vector(int ac , char **av)
{
    std::vector<int> ver = check_number_insert(ac, av);
    std::cout<<"Before: ";
    display(ver);
    int tmp = 0;
    bool flag = false;
    if (ver.size() % 2 != 0)
    {
        tmp = ver.back();
        ver.pop_back();
        flag = true;
    }
    std::vector<std::pair<int, int> > pairs = Divide_To_Pair(ver);
    std::vector<int> small_numbers = sort_Pair(pairs, flag, tmp);
    std::cout<<"After:  ";
    display(small_numbers);
}
/*------------------------------ finich to Vector ----------------------------------------*/
/*------------------------------ start to Deque ----------------------------------------*/
void    display_deque(std::deque<int> str)
{
    std::deque<int>::iterator     it;
    std::deque<int>::iterator     eit;

    it = str.begin();
    eit = str.end();
    while (it != eit)
    {
        std::cout<<*(it++);
        if (it != eit)
            std::cout<<" ";
    }
    std::cout<< std::endl;
}

std::deque<int>   check_number_insert_deque(int ac, char**av)
{
    unsigned int MaxNumber = std::numeric_limits<int>::max();

    for (int i = 1; i < ac; i++)
    {
        unsigned int num;
        std::istringstream iss(av[i]);
        iss>> num;

        if (MaxNumber < num)
            throw std::runtime_error("Error : number grand to max!");
        for (int j = 0; av[i][j] != '\0'; j++)
        {
            if (j == 0 && av[i][j] == '+')
                continue;
            else if (!std::isdigit(av[i][j]))
                throw std::runtime_error("Error : Invalid number!");
        }
    }
    std::deque<int> ver;
    for (int k = 1; k < ac; k++)
    {
        if (av[k][0] == '\0')
        {
            throw std::runtime_error("Error : Invalid number!");
        }
        int val = std::atoi(av[k]);
        ver.push_back(val);
    }
    return ver;
}

std::deque<std::pair<int, int> > Divide_To_Pair_deque(std::deque<int>ver)
{
    std::deque<std::pair<int, int> > pairs;
    std::deque<int>::iterator  it;
    it = ver.begin();
    while (it != ver.end() && it != ver.end() - 1)
    {
        pairs.push_back(std::pair<int, int>(*(it++), *(it++)));
    }
    return pairs;
}

std::deque<int> sort_Pair_deque(std::deque<std::pair<int, int> > pairs, bool flag, int tmp)
{
    std::deque<std::pair<int, int> >::iterator pairs_it;
    std::deque<int> grand_numbers;
    std::deque<int> small_numbers;
    pairs_it = pairs.begin();
    while (pairs_it != pairs.end())
    {
        if (pairs_it->first < pairs_it->second)
            std::swap(pairs_it->first, pairs_it->second);
        small_numbers.insert(lower_bound(small_numbers.begin(), small_numbers.end(), pairs_it->second), pairs_it->second);
        grand_numbers.push_back(pairs_it->first);
        pairs_it++;
    }
    std::deque<int>::iterator grand_it;
    grand_it = grand_numbers.begin();
    while(grand_it != grand_numbers.end())
    {
        small_numbers.insert(lower_bound(small_numbers.begin(), small_numbers.end(), *grand_it), *grand_it);
        grand_it++;
    }
    if (flag)
        small_numbers.insert(lower_bound(small_numbers.begin(), small_numbers.end(), tmp), tmp);
    return (small_numbers);
}

void for_Deque(int ac , char **av)
{
    std::deque<int> ver = check_number_insert_deque(ac, av);
    int tmp = 0;
    bool flag = false;
    
    if (ver.size() % 2 != 0)
    {
        tmp = ver.back();
        ver.pop_back();
        flag = true;
    }
    std::deque<std::pair<int, int> > pairs = Divide_To_Pair_deque(ver);
    std::deque<int> small_numbers = sort_Pair_deque(pairs, flag, tmp);
}
