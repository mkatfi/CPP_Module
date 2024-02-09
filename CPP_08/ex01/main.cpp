/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:08:12 by mkatfi            #+#    #+#             */
/*   Updated: 2024/02/08 16:27:56 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

int main()
{
    try{
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

// int main() {
//     try {
//         Span span(10000);

//         std::vector<int> vec;
//         for (int i = 1; i <= 10000; ++i)
//         {
//             vec.push_back(i);
//         }

//         span.addNumber(vec.begin(), vec.end());

//         std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;
//         std::cout << "Longest Span: " << span.longestSpan() << std::endl;
//     } catch (const std::exception& e) {
//         std::cerr << "Exception: " << e.what() << std::endl;
//     }

//     return 0;
// }

