/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:36:49 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/09 19:35:09 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
    int zombies_N = 5;
    std::string name = "jhon";
    Zombie *horde;
    
    horde = zombieHorde(zombies_N, name);
    for (int i = 0; i < zombies_N; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    
    return (0);
    
}