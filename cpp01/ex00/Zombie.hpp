/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:36:51 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/09 19:10:50 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H_
#define __ZOMBIE_H_
#include <string>
#include <iostream>

class Zombie
{

    public:
        Zombie(std::string z_name);
        ~Zombie(void);
        void announce( void );

    private:
        std::string name;
    
};


#endif