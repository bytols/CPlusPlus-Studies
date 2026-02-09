/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 22:28:44 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/02 01:01:35 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __FIXED_H_
#define __FIXED_H_
#include <iostream>

class Fixed
{
    private:
        int _RawBits;
        static const int _frac = 8; 
        
    public:
        Fixed();
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &other);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif
