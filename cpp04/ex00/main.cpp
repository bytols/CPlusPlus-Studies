/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:49:10 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/11 02:00:00 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./WrongCat.hpp"
#include "./WrongAnimal.hpp"

int main()
{
    std::cout << "=== TESTE DO SUBJECT ===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    std::cout << "\n=== TESTE WRONG ===" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    wrongCat->makeSound();
    wrongMeta->makeSound();
    delete wrongMeta;
    delete wrongCat;

    std::cout << "\n=== TESTE STACK ===" << std::endl;
    {
        Dog dog;
        Cat cat;
        dog.makeSound();
        cat.makeSound();
    }

    std::cout << "\n=== TESTE COPY ===" << std::endl;
    {
        Cat original;
        Cat copy(original);
        copy.makeSound();
        original.makeSound();
    }

    return 0;
}
