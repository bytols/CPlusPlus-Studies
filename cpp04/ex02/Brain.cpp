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
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
    std::cout << "Brain Copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    std::cout << "Brain Copy assignment operator called" << std::endl;
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain Destructor called" << std::endl;
}