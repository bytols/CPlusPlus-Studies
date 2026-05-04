/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 18:01:47 by erocha-l          #+#    #+#             */
/*   Updated: 2026/05/04 19:23:53 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstddef>
#include <string>

Intern::Intern()
{
    
}

Intern::Intern(const Intern &copy)
{

}

Intern &Intern::operator=(const Intern &other)
{
    
}

Intern::~Intern()
{

}

static AForm* createShrubbery(std::string target) {
    return new ShrubberyCreationForm(target);
}

static AForm* createPardon(std::string target) {
    return new PresidentialPardonForm(target);
}

static AForm* createRobotomy(std::string target) {
    return new RobotomyRequestForm(target);
}

AForm *Intern::makeForm(std::string form, std::string target)
{

    typedef AForm* (*FormCreator)(std::string);
    
    std::map<std::string, FormCreator> forms;

    forms["ShrubberyCreationForm"] = &createShrubbery;
    forms["PresidentialPardonForm"] = &createPardon;
    forms["RobotomyRequestForm"] = &createRobotomy;

    std::map<std::string, FormCreator>::iterator it = forms.find(form);

    if (it != forms.end())
    {
            std::cout << "Intern creates" << target << std::endl;
            return ((it->second)(target));
    }
        
    std::cerr << "Invalid form" << std::endl;
    return  (NULL);
}