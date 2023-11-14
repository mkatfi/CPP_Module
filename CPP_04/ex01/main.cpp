#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

// int main(void)
// {
//     Dog *mosh1 = new Dog();
//     Dog *mosh2 = new Dog();

//     *mosh1 = *mosh2;
//     delete mosh1;
//     delete mosh2;
//     // system("leaks Brain");
// }

int main(void)
{
    Animal *a[10];
    
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
