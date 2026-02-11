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

#define ARRAY_SIZE 10

int main()
{
    std::cout << "=== TESTE DO SUBJECT ===" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    std::cout << "\n=== ARRAY DE ANIMALS ===" << std::endl;
    Animal* animals[ARRAY_SIZE];

    for (int k = 0; k < ARRAY_SIZE; k++)
    {
        if (k < ARRAY_SIZE / 2)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
        std::cout << std::endl;
    }

    std::cout << "\n=== SONS ===" << std::endl;
    for (int k = 0; k < ARRAY_SIZE; k++)
        animals[k]->makeSound();

    std::cout << "\n=== DELETANDO ARRAY ===" << std::endl;
    for (int k = 0; k < ARRAY_SIZE; k++)
    {
        delete animals[k];
        std::cout << std::endl;
    }

    std::cout << "\n=== TESTE DEEP COPY (Dog) ===" << std::endl;
    {
        Dog original;
        Dog copy(original);
        std::cout << "Original e Copy criados com sucesso." << std::endl;
        std::cout << "Destruindo ambos (nao deve dar double free)..." << std::endl;
    }

    std::cout << "\n=== TESTE DEEP COPY (Cat) ===" << std::endl;
    {
        Cat original;
        Cat copy;
        copy = original;
        std::cout << "Assignment feito com sucesso." << std::endl;
        std::cout << "Destruindo ambos (nao deve dar double free)..." << std::endl;
    }

    return 0;
}
