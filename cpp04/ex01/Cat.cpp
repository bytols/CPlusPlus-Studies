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
#include "./Animal.hpp"

Cat::Cat(void) : Animal()
{
    this->type = "Cat";
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    this->type = "Cat";
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "Cat Copy assignment operator called" << std::endl;
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Cat Destructor called" << std::endl;
}


void Cat::makeSound() const
{
    std::cout << "MIAUWWWWWWWWWWWWWNNNNNNN  miau" << std::endl;
}