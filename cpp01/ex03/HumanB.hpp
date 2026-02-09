/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 09:18:52 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/09 19:48:00 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAMB_H_
#define __HUMAMB_H_
#include <string>
#include <iostream>
#include "./Weapon.hpp"

class HumanB{

    public:
        HumanB(std::string value);
        ~HumanB(void);
        void    attack(void);
        void    setWeapon(Weapon &new_weapon);

    private:
        std::string name;
        Weapon *equipment;

};
#endif