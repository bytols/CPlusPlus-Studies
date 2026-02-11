/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:14:33 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/08 00:21:39 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << this->_name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : _name(copy._name), _hitPoints(copy._hitPoints), _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage) 
{
    std::cout << "ClapTrap " << this->_name << " copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
        this->_hitPoints = other._hitPoints;
    }
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->_name << " destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints > 0 &&  this->_hitPoints > 0)
    {
        this->_energyPoints--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target << " , causing " << this->_attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        if (this->_energyPoints <= 0)
            std::cout << "ClapTrap " << this->_name << " has no energy point left"<< std::endl;
        else if (this->_hitPoints <= 0)
            std::cout << "ClapTrap " << this->_name << " has no hit points left"<< std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
        std::cout << "ClapTrap " << this->_name << " Is already out of combat with " << this->_hitPoints << " of hit points" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->_name << " lost " << amount << " of hit points" << std::endl;
        this->_hitPoints  = this->_hitPoints - amount; 
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0 &&  this->_hitPoints > 0)
    {
        this->_energyPoints--;
        this->_hitPoints = this->_hitPoints + amount;
        std::cout << "ClapTrap " << this->_name << " received " << amount << " of hit points" << std::endl;
    }
    else
    {
        if (this->_energyPoints <= 0)
            std::cout << "ClapTrap " << this->_name << " has no energy point left"<< std::endl;
        else if (this->_hitPoints <= 0)
            std::cout << "ClapTrap " << this->_name << " has no hit points left"<< std::endl;
    }

}


