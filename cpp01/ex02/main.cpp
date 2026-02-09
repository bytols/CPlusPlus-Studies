/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:36:49 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/09 19:41:55 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";    
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "The memory address of the string variable: " <<  &str << std::endl;
    std::cout << "The memory address held by stringPTR: " <<  stringPTR << std::endl;
    std::cout << "The memory address held by stringREF: " <<  &stringREF << std::endl;

    std::cout << "The value of the string variable: " <<  str << std::endl;
    std::cout << "The value held by stringPTR: " <<  *stringPTR << std::endl;
    std::cout << "The value held by stringREF: " <<  stringREF << std::endl; 

    return (0);
}