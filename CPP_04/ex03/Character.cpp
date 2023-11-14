/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:06:53 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/14 02:17:52 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : name(name)
{
    // inventory_delet = new *AMateria[len];
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = NULL;
    }
    for (int i = 0; i < 4000; i++)
    {
        inventory_delet[i] = NULL;
    }
    // std::cout << "Character " << this->name << " created" << std::endl;
}

Character::Character(Character const &other)
{
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = NULL;
    }
    for (int i = 0; i < 4000; i++)
    {
        inventory_delet[i] = NULL;
    }
    // std::cout << "Character Copy constructor called" << std::endl;
    *this = other;
}

Character::Character()
{
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = NULL;
    }
      for (int i = 0; i < 4000; i++)
    {
        inventory_delet[i] = NULL;
    }
	// std::cout << "Character Default Contructor called" << std::endl;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == NULL)
        {  
            inventory[i] = m;            
            break;
        }
    }
}

std::string const &Character::getName() const
{
    return this->name;
}
    
void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
      for( int i = 0; i < 4000 ; i++)
        {
            if (!inventory_delet[i])
            {
                inventory_delet[i] = inventory[idx];
                break;
            }
        }
        inventory[idx] = NULL;
        return ;
    }
}

Character &Character::operator=(Character const &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++) 
        {
            if (inventory[i] != NULL) 
            {
                delete inventory[i];
            }
        }
        name = other.name;
        for (int i = 0; i < 4; i++)
        {
            if (other.inventory[i] != NULL) 
            {
                inventory[i] = other.inventory[i]->clone();
            }
            else 
            {
                inventory[i] = NULL;
            }
        }
    }
    return *this;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
    {
        inventory[idx]->use(target);
    }
}

Character::~Character()
{
    // std::cout << "Character Destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        bool flag = true;
        for (int j = i + 1; j < 4; j++) {
            if (inventory[i] == inventory[j]) 
            {
                flag = false;
                break;
            }
        }
        if (flag)
            delete inventory[i];
    }
}