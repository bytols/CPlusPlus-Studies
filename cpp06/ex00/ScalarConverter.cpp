/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:14:52 by erocha-l          #+#    #+#             */
/*   Updated: 2026/05/06 01:12:11 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScalarConverter.hpp"
#include <cctype>
#include <cstddef>
#include <cstdlib>
#include <string>

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

bool is_all_digit(const std::string &str)
{
    long unsigned int i;
    
    if (str[0] == '-')
        i = 1;
    for (; i < str.length(); i++)
    {
        if (isdigit(str[i]) == false)
            return false;
    }
    return true;
}

bool is_float_double(const std::string &str)
{
    long unsigned int i;
    
    if (str == "+inf" ||  str == "+inff" ||  str == "-inff"||  str == "-inff"||  str == "nan"||  str == "nanf")
        return true;
    if (str[0] == '-')
        i = 1;
    if (!isdigit(str[0]))
        return  false;
    for (; i < str.length(); i++)
    {
        if (isdigit(str[i]) || str[i] == '.')
        {
            if(str[i] == '.' && str[i + 1]  && isdigit(str[1+i]))
                return true;
        }
        else
            return false;
    }
    return false;
}

void detect_type(const std::string &value, data *num)
{

    char *end;
    std::string str;

    str = value;
    
    if (str == "")
        return ;
    if(std::isalpha(str[0]) &&  str.length() == 1)
    {
        num->tipo = TIPO_CHAR;
        num->DoubleVal = str[0];
    }
    else if (is_all_digit(str) == true)
    {
        num->tipo = TIPO_INT;
        num->DoubleVal = std::strtod(str.c_str(), &end);
        std::cout << num->DoubleVal << std::endl;
    }
    else if (is_float_double(str) == true) 
    {
        num->DoubleVal = std::strtod(str.c_str(), &end);
        if (end == NULL)
            num->tipo = TIPO_DOUBLE;
        else if (end[0] == 'f' && end[1] == '\0')
            num->tipo = TIPO_FLOAT;
        else
            num->tipo = TIPO_INVALID;
    }      
    num->tipo = TIPO_INVALID;
    
}

void ScalarConverter::convert(const std::string &str)
{
    data num;

    detect_type(str, &num);
    
}

#Estou lidando com o exercio 00 desse pdf eu implemente na pasta cpp06 ex00 apenas por enquanto uma funçào que verifica o tipo de literal que eu recebi como string, ouj se é invalido, vou lidar com overflow depois, gostaria que voce me ajudasse a melhorar e entender os pontos fracos da minha estrutura, mas caso esteja totalmente funcional nao altere nada