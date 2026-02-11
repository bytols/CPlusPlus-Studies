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
    this->_brain = new Brain;
    for (int i = 0; i < 99; i++)
        this->_brain[i] = copy._brain[i];
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        this->type = other.type;
        for (int i = 0; i < 99; i++)
            this->_brain[i] = other._brain[i];
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