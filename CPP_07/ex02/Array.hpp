/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:16:07 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/29 18:33:13 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

template <typename T>
class Array{
private:
    T* array;
    unsigned int numbers;

public:
    Array()
    {
        std::cout << "Default constructor is called\n";
        this->array = NULL;
        this->numbers = 0;
    }

    Array(unsigned int n)
    {
        std::cout << "Parameterized constructor is called\n";
        this->array = new T[n];
        if (!this->array)
            throw std::bad_alloc();
        this->numbers = n;
    }

    Array(const Array& other)
    {
        std::cout << "Copy  constructor is called\n";
        this->array = new T [other.numbers];
        this->numbers = other.numbers;

        for (unsigned int i = 0; i < numbers; ++i)
        {
            array[i] = other.array[i];
        }
    }

    Array& operator=(const Array& other)
    {
        std::cout << "Copy Assignment operator is called\n";
        delete[] array;

        array = new T[other.numbers];
        numbers = other.numbers;

        for (unsigned int i = 0; i < numbers; ++i)
        {
            array[i] = other.array[i];
        }
        return (*this);
    }

    ~Array()
    {
        std::cout<< "Destructor is calling\n";
        delete[] array;
    }

    const T& operator[](unsigned int index) const
    {
        if (index >= numbers)
            throw std::out_of_range("error1 : out_of_range");
        return array[index];
    }

    T& operator[](unsigned int index)
    {
        if (index >= numbers)
            throw std::out_of_range("error : out_of_range");
        return array[index];
    }

    // hadi Member function size
    unsigned int size() const
    {
        return numbers;
    }
};

#endif
