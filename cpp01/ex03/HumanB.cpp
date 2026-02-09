/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 09:05:04 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/09 19:52:19 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"
#include "./Weapon.hpp"

HumanB::HumanB(std::string value) : name(value), equipment(0)
{

}

HumanB::~HumanB(void)
{

}

void    HumanB::attack(void)
{
    if (this->equipment == NULL)
    {
        std::cout << this->name << "cant attack, no weapon set" << std::endl;
        return ;
    }
    std::cout << this->name << " attacks with their " << this->equipment->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &new_weapon)
{
    this->equipment = &new_weapon;
    return ;
}