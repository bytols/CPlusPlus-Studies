/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 12:55:43 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/08 00:06:43 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H_
#define __CLAPTRAP_H_
#include <iostream>
#include <string>

class ClapTrap
{
    
    protected:

        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
        
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &copy);
        ClapTrap &operator=(const ClapTrap &other);
        virtual ~ClapTrap();
        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};



#endif