/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 16:32:31 by erocha-l          #+#    #+#             */
/*   Updated: 2026/04/26 16:46:40 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Form.hpp"

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : 
_name(name), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute), _isSigned(false)
{
    
    if (this->_grade_to_sign < 1 || this->_grade_to_execute < 1)
        throw GradeTooLowException();
    if (this->_grade_to_sign > 150 || this->_grade_to_execute > 150)
        throw GradeTooHighException();
    
    std::cout << "Form Constructor Called" << std::endl;
}

Form::~Form()
{
    std::cout << "Form Default Destructor Called" << std::endl;
}

Form::Form(const Form &copy)
{
    this->_name = copy.getName();
    this->_grade_to_sign = copy.getGradeToSign();
    this->_grade_to_execute = copy.getGradeToExecute();
    this->_isSigned = copy.getIsSigned();
    std::cout << "Form Copy assignment operator called" << std::endl;
}

Form &Form::operator=(const Form &other)
{
    if (this != &other)
    {
        this->_name = other.getName();
        this->_grade_to_sign = other.getGradeToSign();
        this->_grade_to_execute = other.getGradeToExecute();
        this->_isSigned = other.getIsSigned();
    }
    std::cout << "Form equal assignment operator called" << std::endl;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Form &ref)
{
    out << 
}

bool Form::getIsSigned() const
{
    return (this->_isSigned);
}

std::string Form::getName() const
{
    return (this->_name);
}

int Form::getGradeToSign() const
{
    return (this->_grade_to_sign);
}

int Form::getGradeToExecute() const
{
    return (this->_grade_to_execute);
}

    
