/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:45:46 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/14 21:20:11 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

// int main()
// {    
//     Cat A;
//     Cat b = A;
//     Dog B;
//     AAnimal* C = new Cat();
//     b.makeSound();
//     B.makeSound();
//     C->makeSound();
    
//     return 0;
// }

// int main(void)
// {
//     Dog *mosh1 = new Dog();
//     Dog *mosh2 = new Dog();

//     *mosh1 = *mosh2;
//     delete mosh1;
//     delete mosh2;
// }

int main1(void)
{
    AAnimal *a[10];
    
    int i = 0;
    while (i < 10)
    {
        a[i] = new Dog(); 
        i++;
        if (i == 5)
        {
            while (i < 10)
            {
                a[i] = new Cat(); 
                i++;
            }
        }
    }
    for (int i = 0; i < 10 ; i++)
    {
        std::cout << a[i]->getType() << std::endl;
        // a[i]->makeSound();
    }
    for (int i = 0; i < 10 ; i++)
    {
        delete a[i];
    }
    return 0;
}
int main(){
    main1();
    system("leaks Abstract");
    return 0;
}
