/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:36:49 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/09 19:26:12 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie* newZombie(std::string name );
void randomChump( std::string name );

int main(void)
{
    std::cout << "--- Zombie on the stack ---" << std::endl;
    {
        Zombie stackZombie("StackBoy");
        stackZombie.announce();
    }
    std::cout << "--- StackBoy destroyed automatically ---" << std::endl;

    std::cout << std::endl;

    std::cout << "--- Zombie on the heap (newZombie) ---" << std::endl;
    Zombie *heapZombie = newZombie("HeapGuy");
    heapZombie->announce();
    delete heapZombie;
    std::cout << "--- HeapGuy destroyed manually with delete ---" << std::endl;

    std::cout << std::endl;

    std::cout << "--- Zombie with randomChump (stack) ---" << std::endl;
    randomChump("RandomDude");
    std::cout << "--- RandomDude destroyed automatically ---" << std::endl;

    return (0);
}