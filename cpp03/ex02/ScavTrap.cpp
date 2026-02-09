/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 23:30:46 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/08 00:25:56 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"
#include "./ClapTrap.hpp"

ScavTrap::ScavTrap(void) :  ClapTrap()
{
    std::cout << "Default Scavtrap constructor called" << std::endl;
    this->_attackDamage = 20;
    this->_energyPoints = 50;
    this->_hitPoints = 100;
}

ScavTrap::ScavTrap(std::string name) :  ClapTrap(name)
{
    std::cout << "parameterized Scavtrap constructor called" << std::endl;
    this->_attackDamage = 20;
    this->_energyPoints = 50;
    this->_hitPoints = 100;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "Copy Scavtrap constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
        this->_hitPoints = other._hitPoints;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->_name << " Is now in Gate keeper mode"  << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energyPoints > 0 &&  this->_hitPoints > 0)
    {
        this->_energyPoints--;
        std::cout << "Scavtrap " << this->_name << " attacks " << target << " , causing " << this->_attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        if (this->_energyPoints <= 0)
            std::cout << "Scavtrap " << this->_name << " has no energy point left"<< std::endl;
        else if (this->_hitPoints <= 0)
            std::cout << "Scavtrap " << this->_name << " has no hit points left"<< std::endl;
    }
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scavtrap Destructor called" << std::endl;
}