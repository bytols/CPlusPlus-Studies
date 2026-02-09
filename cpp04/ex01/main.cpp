/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:49:10 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/08 22:52:04 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./Cat.hpp"
#include "./WrongCat.hpp"
#include "./WrongAnimal.hpp"

int main()
{
    std::cout << "--- TESTE ANIMAL ---" << std::endl;
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    i->makeSound();
    meta->makeSound();
    delete meta;
    delete i;

    std::cout << "\n--- TESTE WRONG ---" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    wrongCat->makeSound();
    wrongMeta->makeSound();
    delete wrongMeta;
    delete wrongCat;

    return 0;
}