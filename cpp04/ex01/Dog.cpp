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
#include "./Animal.hpp"

Dog::Dog(void) : Animal()
{
    this->type = "Dog";
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    this->type = "Dog";
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "Dog Copy assignment operator called" << std::endl;
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Dog Destructor called" << std::endl;
}


void Dog::makeSound() const
{
    std::cout << "AUUUUUUUU au au au, sou um cachorro" << std::endl;
}