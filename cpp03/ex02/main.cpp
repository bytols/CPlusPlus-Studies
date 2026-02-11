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

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "=== FragTrap construction chaining ===" << std::endl;
    FragTrap frag("FRAG-01");
    std::cout << std::endl;

    std::cout << "=== FragTrap attack (30 damage) ===" << std::endl;
    frag.attack("a target");
    std::cout << std::endl;

    std::cout << "=== FragTrap takes damage and repairs ===" << std::endl;
    frag.takeDamage(40);
    frag.beRepaired(20);
    std::cout << std::endl;

    std::cout << "=== FragTrap special ability ===" << std::endl;
    frag.highFivesGuys();
    std::cout << std::endl;

    std::cout << "=== ScavTrap for comparison ===" << std::endl;
    ScavTrap scav("SCAV-01");
    scav.attack("a target");
    scav.guardGate();
    std::cout << std::endl;

    std::cout << "=== Destruction chaining (reverse order) ===" << std::endl;
    return (0);
}
