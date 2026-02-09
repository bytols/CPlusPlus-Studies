/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 00:54:12 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/02 01:18:56 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

int main(void) {
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    Fixed numA;
    numA.setRawBits(10);
    Fixed numB;
    Fixed numC(numA);
    std::cout << numA.getRawBits() << std::endl;    
    std::cout << numB.getRawBits() << std::endl;
    std::cout << numC.getRawBits() << std::endl;
    numB.setRawBits(20);
    numC = numA = numB;
    std::cout << numA.getRawBits() << std::endl;    
    std::cout << numB.getRawBits() << std::endl;
    std::cout << numC.getRawBits() << std::endl;

    return (0);
}
