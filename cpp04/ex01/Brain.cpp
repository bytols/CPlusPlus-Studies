/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-11 01:09:22 by erocha-l          #+#    #+#             */
/*   Updated: 2026-02-11 01:09:22 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy) : ideas(copy.ideas)
{
    std::cout << "Animal Copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 99; i++) 
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    std::cout << "Animal Copy assignment operator called" << std::endl;
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Animal Destructor called" << std::endl;
}