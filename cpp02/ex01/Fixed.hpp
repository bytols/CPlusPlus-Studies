/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 22:28:44 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/03 00:12:58 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __FIXED_H_
#define __FIXED_H_
#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _RawBits;
        static const int _frac = 8; 
        
    public:
        Fixed();
        Fixed(const int num);
        Fixed(const float num);
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &other);
        float toFloat( void ) const;
        float toInt( void ) const;
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        friend std::ostream &operator<<(std::ostream &o, Fixed const &i);
};

#endif
