/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:14:55 by erocha-l          #+#    #+#             */
/*   Updated: 2026/05/08 00:00:00 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTER_H_
#define __SCALARCONVERTER_H_

#include <cctype>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <string>


class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& copy);
        ScalarConverter& operator=(const ScalarConverter& other);
        ~ScalarConverter();

    public:
        static void convert(const std::string &str);
};

enum TipoAtivo {
    TIPO_INT,
    TIPO_FLOAT,
    TIPO_CHAR,
    TIPO_DOUBLE,
    TIPO_INVALID,
};

typedef struct data {
    bool charValido;
    bool intValido;
    bool floatValido;
    bool doubleValido;
    TipoAtivo tipo;

    int    IntVal;
    char   CharVal;
    double DoubleVal;
    float  FloatVal;
} data;

#endif
