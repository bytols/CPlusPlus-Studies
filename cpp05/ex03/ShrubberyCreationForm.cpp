/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 17:35:09 by erocha-l          #+#    #+#             */
/*   Updated: 2026/05/04 18:32:07 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) 
    : AForm("ShrubberyCreationForm", 145, 137), _target(target) 
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) 
    : AForm(copy), _target(copy._target)
{

}

ShrubberyCreationForm  &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        this->AForm::operator=(other);
        this->_target = other._target;
    }

    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::stringstream file_name;
    std::string file_name_str;

    if (executor.GetGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    if (!(this->getIsSigned()))
        throw AForm::NotSignedException();

    file_name << _target << "_shrubbery";
    file_name_str = file_name.str();
    std::fstream file(file_name_str.c_str(), std::ios::out);

    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file!" << std::endl;
        return ;
    }

    file << "      /\\      " << std::endl;
    file << "     /\\*\\     " << std::endl;
    file << "    /\\O\\*\\    " << std::endl;
    file << "      ||      " << std::endl;

    file.close();    

}
