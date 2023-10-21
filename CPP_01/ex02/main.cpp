/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:35:31 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/21 18:08:09 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

int main()
{
    std :: string val =  "HI THIS IS BRAIN";
    std :: string* stringPTR = &val;
    std :: string& stringREF = val;

    std :: cout << val<<std::endl;
    std :: cout << *stringPTR<<std::endl;
    std :: cout << stringREF<<std::endl;

    std::cout<<std::endl;
    std::cout << &val << std :: endl;
    std::cout << stringPTR << std :: endl;
    std::cout << &stringREF << std :: endl;
}