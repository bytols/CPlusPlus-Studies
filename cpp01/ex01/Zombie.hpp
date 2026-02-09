/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:36:51 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/09 19:11:40 by erocha-l         ###   ########.fr       */
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
        Zombie(void);
        ~Zombie(void);
        void name_zombie(std::string z_name);
        void announce( void );

    private:
        std::string name;
    
};


#endif