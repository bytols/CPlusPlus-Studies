/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 23:28:43 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/09 19:45:17 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

Weapon::Weapon(std::string weapon) : type(weapon)
{

}

Weapon::~Weapon()
{

}

const   std::string &Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(std::string value)
{
    this->type = value;
}