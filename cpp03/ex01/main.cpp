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

#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "=== Construction chaining ===" << std::endl;
    ScavTrap scav("SCAV-01");
    std::cout << std::endl;

    std::cout << "=== ScavTrap attack (different message from ClapTrap) ===" << std::endl;
    scav.attack("a training dummy");
    std::cout << std::endl;

    std::cout << "=== ScavTrap takes damage and repairs ===" << std::endl;
    scav.takeDamage(30);
    scav.beRepaired(10);
    std::cout << std::endl;

    std::cout << "=== ScavTrap special ability ===" << std::endl;
    scav.guardGate();
    std::cout << std::endl;

    std::cout << "=== Drain all energy (48 remaining) ===" << std::endl;
    for (int i = 0; i < 48; i++)
        scav.attack("the air");
    std::cout << std::endl;

    std::cout << "=== No energy left ===" << std::endl;
    scav.attack("anything");
    scav.beRepaired(5);
    std::cout << std::endl;

    std::cout << "=== ClapTrap for comparison ===" << std::endl;
    ClapTrap clap("CLAP-01");
    clap.attack("a target");
    std::cout << std::endl;

    std::cout << "=== Destruction chaining (reverse order) ===" << std::endl;
    return (0);
}
