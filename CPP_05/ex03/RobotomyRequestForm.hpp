/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:08:27 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/21 10:50:24 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include<exception>


class RobotomyRequestForm : public AForm
{
    private:
         std::string _target;
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm( const std::string target);
        RobotomyRequestForm( const RobotomyRequestForm &src);
        RobotomyRequestForm &operator=( const RobotomyRequestForm &rhs);

/* --------------------------------- Others --------------------------------- */

        void execute(Bureaucrat const & executor)const ;

};

#endif
