/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 23:13:11 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/08 00:17:17 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H_
#define __SCAVTRAP_H_
#include <iostream>
#include <string>
#include "./ClapTrap.hpp"

    
class ScavTrap : public ClapTrap
{
    
    public:

        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &copy);
        ScavTrap &operator=(const ScavTrap &other);
        ~ScavTrap();
        void attack(const std::string& target);
        void guardGate(void);

};


#endif