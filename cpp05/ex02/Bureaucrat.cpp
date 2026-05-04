/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:32:30 by erocha-l          #+#    #+#             */
/*   Updated: 2026/05/03 21:51:27 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"
#include "./AForm.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    if (grade > 150)
        throw Bureaucrat::GradeTooHighException();

    this->_grade = grade;
    
    std::cout << "Bureaucrat Constructor Called" << std::endl;
}


Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Default Destructor Called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        this->_name = other.GetName();
        this->_grade = other.GetGrade();
    }
    std::cout << "Bureaucrat equal assignment operator called" << std::endl;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &ref)
{
    out << ref.GetName() << ", bureaucrat grade " << ref.GetGrade() << "." << std::endl;
    return (out);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    this->_name = copy.GetName();
    this->_grade = copy.GetGrade();
    std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

int Bureaucrat::GetGrade() const
{
    return (this->_grade);
}

std::string Bureaucrat::GetName() const
{
    return (this->_name);
}

void Bureaucrat::IncrementGrade()
{
    if (this->_grade > 1)
        this->_grade -= 1;
    else
        throw GradeTooHighException();
}

void Bureaucrat::DecrementGrade()
{
    if (this->_grade < 150)
        this->_grade += 1;
    else
        throw GradeTooLowException();
}

void Bureaucrat::signForm(AForm &form)
{
    try {
        form.beSigned(*this);
        std::cout << this->GetName() << " signed " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << this->GetName() << " couldn't sign " << form.getName()
                  << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &form) const
{
    try {
        form.execute(*this);
        std::cout << this->GetName() << " executed " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << this->GetName() << " couldn't execute " << form.getName()
                  << " because " << e.what() << std::endl;
    }
}



