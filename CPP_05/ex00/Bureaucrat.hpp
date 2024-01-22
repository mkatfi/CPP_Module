/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 23:23:49 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/22 14:29:40 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

# define RED	"\x1B[31m"
# define RESET	"\x1B[0m"

class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat&other);
    Bureaucrat &operator=(const Bureaucrat&other);
    Bureaucrat(const std::string& _name, int _grade);

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

    const std::string& getName() const;
    int getGrade() const;

/*---------------------------function (++ ; --)--------------------------------*/

    void incrementGrade();
    void decrementGrade();

};
std::ostream& operator<<(std::ostream &output, const Bureaucrat& rhs);

#endif
