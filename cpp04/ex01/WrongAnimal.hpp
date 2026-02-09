/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:34:37 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/08 22:56:25 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H_
#define __WRONGANIMAL_H_

#include <iostream>
#include <string>

class WrongAnimal
{

    protected:
        std::string type;
        
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator=(const WrongAnimal &other);
        virtual ~WrongAnimal();
        void makeSound() const;
};

#endif