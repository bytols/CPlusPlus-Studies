/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:38:12 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/08 22:56:34 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_H_
#define __WRONGCAT_H_

#include <iostream>
#include <string>
#include "./WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{      
    public:
        WrongCat();
        WrongCat(const WrongCat &copy);
        WrongCat &operator=(const WrongCat &other);
        virtual ~WrongCat();
        void makeSound() const;
};

#endif