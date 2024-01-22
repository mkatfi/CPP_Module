/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 23:45:40 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/21 13:40:26 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include<exception>
#include"Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        bool _signed;
        const int _gradeToSign;
        const int _gradeToExec;
    public:
        AForm();
        virtual ~AForm();
        AForm(const AForm&src);
        AForm &operator=(const AForm&rhs);
        AForm(const std::string &name, int gradeToSign, int gradeToExec);

/* ------------------------------- Exceptions ------------------------------- */

        class GradeTooHighException : public std::exception
        {
        public:
            const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
        public:
            const char *what() const throw();
        };
        class   FormNotSignedException : public  std::exception
        {
        public:
            const char * what() const throw();
        };

/* --------------------------------- Getters -------------------------------- */

        std::string getName()const;
        bool getSigned()const;
        int getGradeToSign()const;
        int getGradeToExec() const ;

/* --------------------------------- Others --------------------------------- */

        void beSigned(const Bureaucrat &bureaucrat);
        virtual void execute(Bureaucrat const & executor)const = 0;
};

/* ------------------------------- Oprator << ------------------------------- */

std::ostream &operator<<(std::ostream &output, AForm const &obj);

#endif
