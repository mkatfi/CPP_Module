/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:07:21 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/14 15:30:03 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

extern AMateria    *inventory_delet[4000];

class Character : public ICharacter
{
private:
    std::string name;
    AMateria    *inventory[4];
public:
    Character();
    Character(std::string name);
    ~Character();
    Character(Character const &other);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx); 
    void use(int idx, ICharacter &target);
    Character&operator=(Character const & other);

};
#endif