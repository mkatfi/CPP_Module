/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:08:35 by mkatfi            #+#    #+#             */
/*   Updated: 2024/02/08 13:10:02 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>

class Span {
private:

    std::vector<int> numbers;
    unsigned int maxSize;

public:
    Span();
    ~Span();
    Span(unsigned int N);
    Span(const Span &src);
    Span &operator=(const Span &old);

    void addNumber(int num);
    int shortestSpan() const;
    int longestSpan() const;

    template<typename Iterator>
    void addNumber(Iterator start, Iterator end)
    {
        for (Iterator it = start; it != end; ++it)
            addNumber(*it);
    }
};

#endif

