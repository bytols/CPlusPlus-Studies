/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 21:38:42 by erocha-l          #+#    #+#             */
/*   Updated: 2026/05/03 21:45:22 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) 
    : AForm("RobotomyRequestForm", 72, 45), _target(target) 
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) 
    : AForm(copy), _target(copy._target)
{

}

RobotomyRequestForm  &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
    {
        this->AForm::operator=(other);
        this->_target = other._target;
    }

    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    int number;
    
    if (executor.GetGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    if (!(this->getIsSigned()))
        throw AForm::NotSignedException();

    std::cout << "Some drill noises!" << std::endl;

    number = rand() % 2;
    if (number == 0)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "Robotomy of " << this->_target << " failed" << std::endl;

}
