/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 00:31:19 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/08 00:36:46 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./FragTrap.hpp"

FragTrap::FragTrap(void) :  ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->_attackDamage = 30;
    this->_energyPoints = 100;
    this->_hitPoints = 100;
}

FragTrap::FragTrap(std::string name) :  ClapTrap(name)
{
    std::cout << "FragTrap " << this->_name << " constructor called" << std::endl;
    this->_attackDamage = 30;
    this->_energyPoints = 100;
    this->_hitPoints = 100;
}


FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap " << this->_name << " copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
        this->_hitPoints = other._hitPoints;
    }
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " Lets give a high five!"  << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->_energyPoints > 0 &&  this->_hitPoints > 0)
    {
        this->_energyPoints--;
        std::cout << "FragTrap " << this->_name << " attacks " << target << " , causing " << this->_attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        if (this->_energyPoints <= 0)
            std::cout << "FragTrap " << this->_name << " has no energy point left"<< std::endl;
        else if (this->_hitPoints <= 0)
            std::cout << "FragTrap " << this->_name << " has no hit points left"<< std::endl;
    }
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " destructor called" << std::endl;
}