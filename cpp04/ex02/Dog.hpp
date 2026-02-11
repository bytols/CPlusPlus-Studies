/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:14:26 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/08 22:56:14 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H_
#define __DOG_H_

#include <iostream>
#include <string>
#include "./Animal.hpp"
#include "./Brain.hpp"


class Dog : public Animal
{     
    private:
        Brain *_brain;

    public:
        Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &other);
        virtual ~Dog();
        virtual void makeSound() const;
};

#endif