/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 09:05:04 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/09 19:45:05 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanA.hpp"
#include "./Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), equipment(weapon)
{

}

HumanA::~HumanA(void)
{

}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->equipment.getType() << std::endl;
}
