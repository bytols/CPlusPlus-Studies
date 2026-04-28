/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 13:46:50 by erocha-l          #+#    #+#             */
/*   Updated: 2026/04/26 16:05:27 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

int main(void)
{

    Bureaucrat c("d", 2);
    try {
        Bureaucrat a("a", 2);
        std::cout << a;
        a.IncrementGrade();
        std::cout << a;
        a.DecrementGrade();
        std::cout << a;
        Bureaucrat b( "Alexander", 150);
        std::cout << b;
        b.DecrementGrade();
        std::cout << b;


    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
