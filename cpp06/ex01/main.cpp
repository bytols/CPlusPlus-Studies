/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:00:00 by erick             #+#    #+#             */
/*   Updated: 2026/05/10 21:00:00 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main(void)
{
    Data data;
    data.numero = 42;
    data.frase = "Hello, serialization!";

    std::cout << "Original pointer: " << &data << std::endl;
    std::cout << "data.numero = " << data.numero << std::endl;
    std::cout << "data.frase  = " << data.frase << std::endl;

    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "\nSerialized value (uintptr_t): " << raw << std::endl;

    Data *recovered = Serializer::deserialize(raw);
    std::cout << "Deserialized pointer: " << recovered << std::endl;

    std::cout << "\nPointers match: " << (recovered == &data ? "true" : "false") << std::endl;
    std::cout << "recovered->numero = " << recovered->numero << std::endl;
    std::cout << "recovered->frase  = " << recovered->frase << std::endl;

    return 0;
}
