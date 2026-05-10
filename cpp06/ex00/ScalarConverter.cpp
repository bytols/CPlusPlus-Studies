/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:14:52 by erocha-l          #+#    #+#             */
/*   Updated: 2026/05/08 16:16:31 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScalarConverter.hpp"
#include <iomanip>
#include <iostream>
#include <limits>


ScalarConverter::ScalarConverter() {
  std::cout << "ScalarConverter Constructor Called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
  (void)copy;
  std::cout << "ScalarConverter Copy Constructor Called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
  (void)other;
  std::cout << "ScalarConverter Assignment Operator Called" << std::endl;
  return (*this);
}

ScalarConverter::~ScalarConverter() {
  std::cout << "ScalarConverter Destructor Called" << std::endl;
}

bool is_all_digit(const std::string &str) {
  long unsigned int i;

  i = 0;
  if (str[0] == '-')
    i = 1;
  if (i == str.length())
    return false;
  for (; i < str.length(); i++) {
    if (isdigit(str[i]) == false)
      return false;
  }
  return true;
}

bool is_float_double(const std::string &str) {
  long unsigned int i;

  i = 0;
  if (str == "+inf" || str == "+inff" || str == "-inff" || str == "-inf" ||
      str == "nan" || str == "nanf")
    return true;
  if (str[0] == '-')
    i = 1;
  if (!isdigit(str[i]))
    return false;
  for (; i < str.length(); i++) {
    if (isdigit(str[i]) || str[i] == '.') {
      if (str[i] == '.' && i + 1 < str.length() && isdigit(str[i + 1]))
        return true;
    } else
      return false;
  }
  return false;
}

void detect_type(const std::string &value, data *num) {

  char *end;
  std::string str;

  str = value;

  if (str == "")
    return;
  if (std::isalpha(str[0]) && str.length() == 1) {
    num->tipo = TIPO_CHAR;
    num->DoubleVal = str[0];
  } else if (is_all_digit(str) == true) {
    num->tipo = TIPO_INT;
    num->DoubleVal = std::strtod(str.c_str(), &end);
  } else if (is_float_double(str) == true) {
    num->DoubleVal = std::strtod(str.c_str(), &end);
    if (end[0] == '\0')
      num->tipo = TIPO_DOUBLE;
    else if (end[0] == 'f' && end[1] == '\0')
      num->tipo = TIPO_FLOAT;
    else
      num->tipo = TIPO_INVALID;
  } else
    num->tipo = TIPO_INVALID;
}

void print_message(data &num) {
  std::cout << "char: ";
  if (num.charValido && (num.CharVal < 33 || num.CharVal > 126))
    std::cout << "Non displayable";
  else if (num.charValido) {
    std::cout <<"'" << num.CharVal << "'";
  } else {
    std::cout << "impossible";
  }
  std::cout << std::endl;

  std::cout << "int: ";
  if (num.intValido) {
    std::cout << num.IntVal;
  } else {
    std::cout << "impossible";
  }
  std::cout << std::endl;

  std::cout << "float: ";
  if (!num.floatValido) {
    std::cout << "impossible";
  } else if (std::isnan(num.FloatVal)) {
    std::cout << "nanf";
  } else if (std::isinf(num.FloatVal)) {
    std::cout << (num.FloatVal > 0 ? "+inff" : "-inff");
  } else {
    std::cout << std::fixed << std::setprecision(1) << num.FloatVal << "f";
  }
  std::cout << std::endl;

  std::cout << "double: ";
  if (!num.doubleValido) {
    std::cout << "impossible";
  } else if (std::isnan(num.DoubleVal)) {
    std::cout << "nan";
  } else if (std::isinf(num.DoubleVal)) {
    std::cout << (num.DoubleVal > 0 ? "+inf" : "-inf");
  } else {
    std::cout << std::fixed << std::setprecision(1) << num.DoubleVal;
  }
  std::cout << std::endl;
}

void int_conversion(data *num) {

  if (num->DoubleVal > INT_MAX || num->DoubleVal < INT_MIN ||
      std::isinf(num->DoubleVal) || std::isnan(num->DoubleVal)) {
      num->intValido = false;
      num->charValido = false;
      num->floatValido = false;
      num->doubleValido = false;
      num->IntVal = 0;
      num->CharVal = 0;
      num->FloatVal = 0;
      num->DoubleVal = 0;
      print_message(*num);
      return ;
  } else {
    num->IntVal = static_cast<int>(num->DoubleVal);
  }

  if (num->IntVal > 255 || num->IntVal < 0 || std::isinf(num->IntVal) ||
      std::isnan(num->IntVal)) {
    num->charValido = false;
    num->CharVal = 0;
  } else {
    num->CharVal = static_cast<char>(num->IntVal);
  }

  if (num->IntVal > INT_MAX || num->IntVal < INT_MIN) {
    num->floatValido = false;
    num->FloatVal = 0;
  } else {
    num->FloatVal = static_cast<float>(num->IntVal);
  }
  print_message(*num);
}

void char_conversion(data *num) {

  if (num->DoubleVal > 255 || num->DoubleVal < 0 || std::isinf(num->DoubleVal) ||
      std::isnan(num->DoubleVal)) {
      num->intValido = false;
      num->charValido = false;
      num->floatValido = false;
      num->doubleValido = false;
      num->IntVal = 0;
      num->CharVal = 0;
      num->FloatVal = 0;
      num->DoubleVal = 0;
      print_message(*num);
      return ;
  }
  else {
    num->CharVal = static_cast<char>(num->DoubleVal);
  }
    num->IntVal = static_cast<int>(num->CharVal);
    num->FloatVal = static_cast<float>(num->CharVal);
  print_message(*num);
}


void float_conversion(data *num)
{
  if (std::isinf(num->DoubleVal) || std::isnan(num->DoubleVal)) {
    num->FloatVal = static_cast<float>(num->DoubleVal);
    num->intValido = false;
    num->charValido = false;
    print_message(*num);
    return ;
  }
  if (num->DoubleVal > std::numeric_limits<float>::max() ||
    num->DoubleVal < -std::numeric_limits<float>::max())
  {
    num->intValido = false;
    num->charValido = false;
    num->floatValido = false;
    print_message(*num);
    return ;
  }
  num->FloatVal = static_cast<float>(num->DoubleVal);
  if (num->FloatVal > INT_MAX || num->FloatVal < INT_MIN ||
      std::isinf(num->FloatVal) || std::isnan(num->FloatVal)) {
    num->intValido = false;
    num->IntVal = 0; 
  } else {
    num->IntVal = static_cast<int>(num->DoubleVal);
  }

  if (num->FloatVal > 255 || num->FloatVal < 0 || std::isinf(num->FloatVal) ||
      std::isnan(num->FloatVal)) {
    num->charValido = false;
    num->CharVal = 0;
  } else {
    num->CharVal = static_cast<char>(num->IntVal);
  }
  print_message(*num);
}

void double_conversion(data *num)
{
  if (std::isinf(num->DoubleVal) || std::isnan(num->DoubleVal)) {
    num->FloatVal = static_cast<float>(num->DoubleVal);
  } else if (num->DoubleVal > std::numeric_limits<float>::max() ||
    num->DoubleVal < -std::numeric_limits<float>::max()) {
    num->floatValido = false;
  } else {
    num->FloatVal = static_cast<float>(num->DoubleVal);
  }
  if (num->DoubleVal > INT_MAX || num->DoubleVal < INT_MIN ||
      std::isinf(num->DoubleVal) || std::isnan(num->DoubleVal)) {
    num->intValido = false;
    num->IntVal = 0; 
  } else {
    num->IntVal = static_cast<int>(num->DoubleVal);
  }

  if (num->DoubleVal > 255 || num->DoubleVal < 0 || std::isinf(num->DoubleVal) ||
      std::isnan(num->DoubleVal)) {
    num->charValido = false;
    num->CharVal = 0;
  } else {
    num->CharVal = static_cast<char>(num->IntVal);
  }
  print_message(*num);
}

void castTypes(data *num) {
  if (num->tipo == TIPO_INT) {
    int_conversion(num);
  }
  else if (num->tipo == TIPO_CHAR)
  {
    char_conversion(num);
  }
  else if (num->tipo == TIPO_FLOAT)
  {
    float_conversion(num);
  }
  else if (num->tipo == TIPO_DOUBLE)
  {
    double_conversion(num);
  }
  else {
    num->intValido = false;
    num->charValido = false;
    num->floatValido = false;
    num->doubleValido = false;
    num->IntVal = 0;
    num->CharVal = 0;
    num->FloatVal = 0;
    num->DoubleVal = 0;
    print_message(*num);
  }
}

void ScalarConverter::convert(const std::string &str) {
  data num;

  num.charValido = true;
  num.intValido = true;
  num.floatValido = true;
  num.doubleValido = true;
  detect_type(str, &num);
  castTypes(&num);
}