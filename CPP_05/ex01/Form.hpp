/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 23:25:12 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/20 19:54:51 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include<exception>

#include"Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool _signed;
        const int _gradeToSign;
        const int _gradeToExec;

    public:
        Form();
        ~Form();
        Form(const Form&src);
        Form &operator=(const Form&rhs);
        Form(const std::string &name, int gradeToSign, int gradeToExec);

/* ----------------------------Exceptions ----------------------------------- */

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

/* --------------------------------- Getters --------------------------------- */

        std::string getName()const;
        bool getSigned()const;
        int getGradeToSign()const;
        int getGradeToExec() const ;

/* --------------------------------- Others -----------------------------------*/

        void beSigned(const Bureaucrat &bureaucrat);
};

/* ------------------------------- Operator << ------------------------------- */

std::ostream &operator<<(std::ostream &output, Form const &obj);

#endif
