/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 00:00:00 by erick             #+#    #+#             */
/*   Updated: 2026/05/12 00:40:12 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base *generate(void)
{
    switch (rand() % 3)
    {
        case 0: return new A();
        case 1: return new B();
        default: return new C();
    }
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

void identify(Base &p)
{
    try 
    { 
        dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        return; 
    }
    catch (std::exception &) {}
    try 
    { 
        dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        return; 
    }    
    catch (std::exception &) {}
    try 
    { 
        dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        return; 
    }    
    catch (std::exception &) {}
}

int main(void)
{
    std::srand(std::time(NULL));

    for (int i = 0; i < 6; i++)
    {
        Base *obj = generate();
        std::cout << "identify(pointer): ";
        identify(obj);
        std::cout << "identify(reference): ";
        identify(*obj);
        delete obj;
    }
    return 0;
}
