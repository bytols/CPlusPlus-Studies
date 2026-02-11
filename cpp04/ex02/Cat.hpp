/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:14:26 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/08 22:56:53 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H_
#define __CAT_H_

#include <iostream>
#include <string>
#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal
{      
    private:
        Brain *_brain;

    public:
        Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &other);
        virtual ~Cat();
        virtual void makeSound() const;
};

#endif