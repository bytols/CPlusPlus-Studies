/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 19:48:46 by erocha-l          #+#    #+#             */
/*   Updated: 2026/01/20 19:51:51 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H_
#define __HARL_H_
#include <string>
#include <iostream>

class Harl{
    
    public:
        Harl(void);
        ~Harl(void);
        void complain( std::string level );
    
    private:

        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

};

#endif