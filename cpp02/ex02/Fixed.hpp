/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 22:28:44 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/05 00:16:20 by erocha-l         ###   ########.fr       */
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
        static Fixed &min(Fixed &obj1, Fixed &obj2);
        static const Fixed &min(const Fixed &obj1,const Fixed &obj2);
        static Fixed &max(Fixed &obj1, Fixed &obj2);
        static const Fixed &max(const Fixed &obj1,const Fixed &obj2);
        bool operator==( const Fixed &other) const;
        bool operator!=( const Fixed &other) const;
        bool operator>=( const Fixed &other) const;
        bool operator<=( const Fixed &other) const;
        bool operator>( const Fixed &other) const;
        bool operator<( const Fixed &other) const;
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;
        Fixed operator++(int);
        Fixed &operator++();
        Fixed operator--(int);
        Fixed &operator--();
        friend std::ostream &operator<<(std::ostream &o, Fixed const &i);

};

#endif
