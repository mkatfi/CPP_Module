/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:08:01 by mkatfi            #+#    #+#             */
/*   Updated: 2024/02/16 10:16:34 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iomanip>

int main(int ac, char **av)
{
    try
    {
        timeval start;
        timeval end;
        long  time;

        if (ac < 2)
        {
            throw std::runtime_error("Error : no numbers set!");
            return (0);
        }
        gettimeofday(&start, NULL);
        for_vector(ac, av);
        gettimeofday(&end, NULL);
        time = (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec  - start.tv_usec);
        std::cout<<"Time to process a range of "<<ac - 1<<" elements with std::vector : "<< time <<" us"<<std::endl;

        gettimeofday(&start, NULL);
        for_Deque(ac, av);
        gettimeofday(&end, NULL);
        time = (end.tv_sec - start.tv_sec) * 1000000 + end.tv_usec  - start.tv_usec;
        std::cout<<"Time to process a range of "<<ac - 1<<" elements with std::deque  : "<<time<<" us"<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

}
