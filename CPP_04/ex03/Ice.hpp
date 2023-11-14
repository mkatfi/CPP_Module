/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:11:06 by mkatfi            #+#    #+#             */
/*   Updated: 2023/11/13 02:12:00 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
    Ice();
    ~Ice();
    Ice&operator=(Ice const &obj);
    Ice(Ice const & obj);
    virtual AMateria* clone() const;
	virtual void	use(ICharacter& target);
};
#endif