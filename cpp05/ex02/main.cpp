/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 13:46:50 by erocha-l          #+#    #+#             */
/*   Updated: 2026/05/03 00:00:00 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    std::srand(std::time(NULL));

    std::cout << "--- ShrubberyCreationForm tests ---" << std::endl;
    {
        Bureaucrat low("LowRank", 150);
        Bureaucrat high("HighRank", 1);
        ShrubberyCreationForm form("home");

        std::cout << form;
        low.signForm(form);    // should fail (grade too low)
        high.signForm(form);   // should succeed
        std::cout << form;
        low.executeForm(form); // should fail (grade too low)
        high.executeForm(form); // should succeed, creates home_shrubbery
    }

    std::cout << std::endl << "--- RobotomyRequestForm tests ---" << std::endl;
    {
        Bureaucrat signer("Signer", 72);
        Bureaucrat exec("Executor", 45);
        RobotomyRequestForm form("Bender");

        std::cout << form;
        exec.executeForm(form); // should fail (not signed)
        signer.signForm(form);  // should succeed
        std::cout << form;
        for (int i = 0; i < 4; i++)
            exec.executeForm(form); // 50% success rate
    }

    std::cout << std::endl << "--- PresidentialPardonForm tests ---" << std::endl;
    {
        Bureaucrat signer("President", 25);
        Bureaucrat exec("Secretary", 5);
        Bureaucrat weak("Intern", 150);
        PresidentialPardonForm form("Arthur Dent");

        std::cout << form;
        weak.signForm(form);   // should fail (grade too low)
        signer.signForm(form); // should succeed
        std::cout << form;
        weak.executeForm(form); // should fail (grade too low)
        exec.executeForm(form); // should succeed
    }

    std::cout << std::endl << "--- Execute unsigned form ---" << std::endl;
    {
        Bureaucrat b("Boss", 1);
        PresidentialPardonForm form("Someone");
        b.executeForm(form); // should fail (not signed)
    }

    return (0);
}
