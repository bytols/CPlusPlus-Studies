/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:18:37 by erocha-l          #+#    #+#             */
/*   Updated: 2026/04/26 16:48:09 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H_
#define __BUREAUCRAT_H_

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
    private:

        const std::string _name;
        int _grade;

    public:

        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat();
        int GetGrade() const;
        std::string GetName() const;
        void IncrementGrade();
        void DecrementGrade();
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &ref);


#endif