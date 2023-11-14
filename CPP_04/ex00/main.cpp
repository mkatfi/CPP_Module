/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:11:08 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/14 21:38:36 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
// const WrongAnimal* p = new WrongAnimal();
// const WrongAnimal* k = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
// std::cout << k->getType() << " " << std::endl;
i->makeSound();
j->makeSound();
meta->makeSound();

// k->makeSound();
// p->makeSound();
delete i;
delete j;
delete meta;
// delete k;
// delete p;
// system("leaks Polymorphism");
return 0; 
}