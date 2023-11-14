/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:11:16 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/14 22:09:56 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"

AMateria    *inventory_delet[4000];

int main()
{
    IMateriaSource* src = new MateriaSource();
    
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    
    return 0;
}
// void f()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     ICharacter* me = new Character("me");
//     AMateria* tmp = new Ice();
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
//     me->unequip(0);
//     me->unequip(1);
//     me->unequip(0);
//     std::cout<<"-------"<<std::endl;
//     delete me;
//     delete src;
    
// }
// void f()
// {
//     IMateriaSource* src = new MateriaSource();
    
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
    
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
//     me->unequip(0);
//     me->unequip(0);
//     me->unequip(0);
//     me->unequip(0);
//     me->unequip(0);
//     me->unequip(0);
//     me->unequip(0);
//     me->unequip(0);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
    
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);
    
//     delete bob;
//     delete me;
//     delete src;
 
// }
// int main()
// {
//     f();
//     system("leaks Interface");
//     return 0;
// }
