/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:36:45 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/09 19:13:18 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie(std::string z_name) : name(z_name)
{

}

Zombie::Zombie(void)
{

}

Zombie::~Zombie(void)
{
    std::cout << this->name << ": Died... Rest in peace" << std::endl ;
}

void    Zombie::name_zombie(std::string z_name)
{
    this->name = z_name;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl ;
}


