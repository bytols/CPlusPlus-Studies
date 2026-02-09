/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:56:13 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/07 15:06:14 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap trapper("TRAP-MASTER");
    ClapTrap anonymous; 
    std::cout << std::endl;

    trapper.attack("a training dummy");
    trapper.takeDamage(5);
    trapper.beRepaired(3);
    std::cout << std::endl;

    for (int i = 0; i < 9; i++) {
        trapper.attack("the air");
    }
    trapper.beRepaired(10);
    std::cout << std::endl;

    ClapTrap target("Target");
    target.takeDamage(10);
    target.takeDamage(5);
    target.attack("anything");   
    target.beRepaired(5);       
    std::cout << std::endl;

    ClapTrap original("Original");
    ClapTrap clone(original);    
    ClapTrap assigned;
    assigned = original;         
    std::cout << std::endl;

    return (0);
}