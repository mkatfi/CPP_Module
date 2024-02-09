/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:08:28 by mkatfi            #+#    #+#             */
/*   Updated: 2024/02/08 16:27:43 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->maxSize = 0;
}

Span::Span(unsigned int N)
{
    this->maxSize = N;
}

Span::Span(const Span &src)
{
    this->maxSize = src.maxSize;
}

Span& Span::operator=(const Span &old)
{
    this->maxSize = old.maxSize;
    this->numbers = old.numbers;

    return (*this);
}

void Span::addNumber(int num)
{
    if (numbers.size() < this->maxSize)
    {
        numbers.push_back(num);
    }
    else
        throw std::overflow_error("Can not add more.");
}

int Span::shortestSpan() const
{
    if (numbers.size() <= 1)
        throw std::runtime_error("Can not find span.");

    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int minSpan = std::numeric_limits<int>::max();

    for (size_t i = 1; i < sortedNumbers.size(); ++i)
    {
        int span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}

int Span::longestSpan() const
{
    if (numbers.size() <= 1)
        throw std::runtime_error("Cannot find span with less than two numbers.");

    std::vector<int>::const_iterator minIt = std::min_element(numbers.begin(), numbers.end());
    std::vector<int>::const_iterator maxIt = std::max_element(numbers.begin(), numbers.end());

    return (*maxIt - *minIt);
}

Span::~Span()
{
    // std::cout<<"Destractor is called\n";
}

