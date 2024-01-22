/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:08:37 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/21 10:50:44 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include"AForm.hpp"

class ShrubberyCreationForm : public AForm {
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm( const std::string target );
        ShrubberyCreationForm( const ShrubberyCreationForm &src );
        ShrubberyCreationForm &operator=( const ShrubberyCreationForm &rhs );

/* --------------------------------- Others --------------------------------- */

        void execute(Bureaucrat const & executor)const ;

};
#endif
