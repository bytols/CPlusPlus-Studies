/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:31:02 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/08 22:56:09 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog(void) : Animal()
{
    this->type = "Dog";
    this->_brain = new Brain;
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    this->type = "Dog";
    this->_brain = new Brain(*copy._brain);
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        *this->_brain = *other._brain;
    }
    std::cout << "Dog Copy assignment operator called" << std::endl;
    return (*this);
}

Dog::~Dog(void)
{
    delete _brain;
    std::cout << "Dog Destructor called" << std::endl;
}


void Dog::makeSound() const
{
    std::cout << "AUUUUUUUU au au au, sou um cachorro" << std::endl;
}