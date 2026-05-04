/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 16:32:31 by erocha-l          #+#    #+#             */
/*   Updated: 2026/05/03 21:26:59 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AForm.hpp"
#include "./Bureaucrat.hpp"

AForm::AForm(std::string name, int grade_to_sign, int grade_to_execute) :
_name(name), _isSigned(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
    if (this->_grade_to_sign < 1 || this->_grade_to_execute < 1)
        throw GradeTooHighException();
    if (this->_grade_to_sign > 150 || this->_grade_to_execute > 150)
        throw GradeTooLowException();

    std::cout << "Form Constructor Called" << std::endl;
}

AForm::~AForm()
{
    std::cout << "Form Default Destructor Called" << std::endl;
}

AForm::AForm(const AForm &copy) :
_name(copy.getName()), _isSigned(copy.getIsSigned()),
_grade_to_sign(copy.getGradeToSign()), _grade_to_execute(copy.getGradeToExecute())
{
    std::cout << "Form Copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
    if (this != &other)
    {
        this->_isSigned = other.getIsSigned();
    }
    std::cout << "Form equal assignment operator called" << std::endl;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const AForm &ref)
{
    out << ref.getName() << ", form grade to sign " << ref.getGradeToSign()
        << ", grade to execute " << ref.getGradeToExecute()
        << ", signed: " << (ref.getIsSigned() ? "yes" : "no") << std::endl;
    return (out);
}

bool AForm::getIsSigned() const
{
    return (this->_isSigned);
}

std::string AForm::getName() const
{
    return (this->_name);
}

int AForm::getGradeToSign() const
{
    return (this->_grade_to_sign);
}

int AForm::getGradeToExecute() const
{
    return (this->_grade_to_execute);
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.GetGrade() > this->_grade_to_sign)
        throw GradeTooLowException();
    this->_isSigned = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Form grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Form grade too low");
}

const char *AForm::NotSignedException::what() const throw()
{
    return ("Form is no signed!");
}
