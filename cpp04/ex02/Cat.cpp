/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:17:40 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/08 22:55:24 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./Cat.hpp"

Cat::Cat(void) : Animal()
{
    this->type = "Cat";
    this->_brain = new Brain;
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    this->type = "Cat";
    this->_brain = new Brain(*copy._brain);
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        *this->_brain = *other._brain;
    }
    std::cout << "Cat Copy assignment operator called" << std::endl;
    return (*this);
}

Cat::~Cat(void)
{
    delete _brain;
    std::cout << "Cat Destructor called" << std::endl;
}


void Cat::makeSound() const
{
    std::cout << "MIAUWWWWWWWWWWWWWNNNNNNN  miau" << std::endl;
}