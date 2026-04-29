/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:14:52 by erocha-l          #+#    #+#             */
/*   Updated: 2026/04/29 16:26:23 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter Constructor Called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    (void)copy;
    std::cout << "ScalarConverter Copy Constructor Called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    std::cout << "ScalarConverter Assignment Operator Called" << std::endl;
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter Destructor Called" << std::endl;
}

void ScalarConverter::convert(const std::string &str)
{
    
}
