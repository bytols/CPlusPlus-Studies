/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 23:13:11 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/08 00:31:24 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H_
#define __FRAGTRAP_H_
#include <iostream>
#include <string>
#include "./ClapTrap.hpp"

    
class FragTrap : public ClapTrap
{
    
    public:

        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &copy);
        FragTrap &operator=(const FragTrap &other);
        ~FragTrap();
        void attack(const std::string& target);
        void highFivesGuys(void);

};


#endif