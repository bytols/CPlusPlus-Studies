/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 22:55:07 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/03 00:08:46 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"


Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_RawBits = 0;
}

Fixed::Fixed(const Fixed &copy) : _RawBits(copy._RawBits)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
    this->_RawBits = num << this->_frac;
    std::cout << "Param int constructor called" << std::endl; 
}

Fixed::Fixed(const float num)
{
    this->_RawBits = roundf(num * (1 << _frac));
    std::cout << "Param floar constructor called" << std::endl; 
}

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
    {
        this->_RawBits = other._RawBits;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_RawBits);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_RawBits = raw;
}

float Fixed::toFloat(void) const {
    return ((float)this->_RawBits / (1 << this->_frac));
}

float Fixed::toInt(void) const {
    return ((int)this->_RawBits  >> this->_frac);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i) 
{
    o << i.toFloat();
    return o;
}
