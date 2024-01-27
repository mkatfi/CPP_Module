/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:43:44 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/26 20:30:48 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fun.hpp"

int main()
{
    srand(time(NULL));

    Base *ptr = generate();
    std::cout<<"------------\n\n";
    identify(ptr);
    identify(*ptr);
    std::cout<<"------------\n\n";

    Base *ptr1 = generate();
    identify(ptr1);
    identify(*ptr1);
    std::cout<<"------------\n\n";

    Base *ptr2 = generate();
    identify(ptr2);
    identify(*ptr2);
    std::cout<<"------------\n\n";

    delete ptr;
    delete ptr1;
    delete ptr2;

    return 0;
}
