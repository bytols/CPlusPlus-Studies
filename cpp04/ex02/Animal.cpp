/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 21:45:14 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/11 01:03:04 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal(void) : type("")
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type)
{
    std::cout << "Animal Copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "Animal Copy assignment operator called" << std::endl;
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << "Animal Destructor called" << std::endl;
}
