/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 21:41:09 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/08 22:55:54 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H_
#define __ANIMAL_H_

#include <iostream>
#include <string>

class Animal
{

    protected:
        std::string type;
        
    public:
        Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &other);
        virtual ~Animal();
        virtual void makeSound() const;
};

#endif