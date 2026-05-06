/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:14:55 by erocha-l          #+#    #+#             */
/*   Updated: 2026/05/06 00:59:04 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTER_H_
#define __SCALARCONVERTER_H_

#include <iostream>

class ScalarConverter
{
    public:
    
        static void convert(const std::string &str);
        ScalarConverter();
        ScalarConverter(const ScalarConverter& copy);
        ScalarConverter& operator=(const ScalarConverter& other);
        ~ScalarConverter();

};

enum TipoAtivo {
    TIPO_INT,
    TIPO_FLOAT,
    TIPO_CHAR,
    TIPO_DOUBLE,
    TIPO_INVALID,
};

typedef struct data {

    TipoAtivo tipo;
    union  {
    int IntVal;
    char CharVal;
    double DoubleVal;
    float FloatVal;
    };
} data;

#endif