/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 16:15:49 by erocha-l          #+#    #+#             */
/*   Updated: 2026/04/26 16:37:47 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORMN_H_
#define __FORMN_H_

#include "Bureaucrat.hpp"

class Form
{
    
    private:
    
        const std::string   _name;
        bool                _isSigned;
        const int           _grade_to_sign;
        const int           _grade_to_execute;

    public:
    
        Form(std::string name, int grade_to_sign, int grade_to_execute);
        Form(const Form &copy);
        Form &operator=(const Form &other);
        ~Form();
        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(const Bureaucrat &bureaucrat);
        void signForm(const Bureaucrat &bureaucrat);
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

};

std::ostream &operator<<(std::ostream &out, const Form &ref);

#endif