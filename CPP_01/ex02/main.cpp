/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:35:31 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/13 20:40:21 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

int main()
{
    std :: string val =  "HI THIS IS BRAIN";
    std :: string* stringPTR = &val;
    std :: string& stringREF = val;

    std :: cout << val <<  " :" << &val << std :: endl;
    std :: cout << *stringPTR << " :" << stringPTR << std :: endl;
    std :: cout << stringREF << " :" << &stringREF << std :: endl;
}