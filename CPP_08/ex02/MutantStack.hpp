/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:08:44 by mkatfi            #+#    #+#             */
/*   Updated: 2024/02/08 16:22:25 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T, class container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{
public:
    MutantStack() : std::stack<T, container>()
    {
        // std::cout << "constractor is called";
    }
    MutantStack(const MutantStack& other) : std::stack<T, container>(other)
	{
		*this = other;
	}
    MutantStack& operator=(const MutantStack& other)
	{
		this->std::stack<T, container>::operator=(other);
	}
    ~MutantStack()
    {
        // std::cout << "destractor is called";
    }

    typedef typename container::iterator iterator;
    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
};

#endif
