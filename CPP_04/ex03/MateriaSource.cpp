/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:11:20 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/14 01:30:20 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        materias[i] = NULL;
    }
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
    *this = other;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] != NULL) {
            delete materias[i];
        }
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
            materias[i] = other.materias[i];
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* other)
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] == NULL)
        {
            materias[i] = other;
            break ;
        }
    }
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] != NULL && materias[i]->getType() == type)
        {
            return materias[i]->clone();
        }
    }
    return NULL;
}