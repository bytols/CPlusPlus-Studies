/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:42:39 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/08 22:56:30 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongCat.hpp"
#include "./WrongAnimal.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    this->type = "WrongCat";
    std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    return (*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat Destructor called" << std::endl;
}


void WrongCat::makeSound() const
{
    std::cout << "NNNNNNWWWWWWWWWWUAIM  uaim uaim" << std::endl;
}