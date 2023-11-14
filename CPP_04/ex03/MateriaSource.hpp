/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:11:23 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/13 02:14:03 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
    AMateria* materias[4];
    public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource( MateriaSource const & other);
    void learnMateria(AMateria*);
    MateriaSource&  operator=( MateriaSource const & other);
    AMateria* createMateria(std::string const & type);
};
#endif