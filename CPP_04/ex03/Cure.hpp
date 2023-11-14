/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:10:01 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/13 02:10:33 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
	Cure();
	Cure(Cure const &cpy);
	~Cure();
	Cure&operator=(Cure const &cpy);
	virtual AMateria*clone() const;
	virtual void	use(ICharacter& target);
};
#endif