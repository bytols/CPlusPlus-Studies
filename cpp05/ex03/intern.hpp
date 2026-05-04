/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 18:01:43 by erocha-l          #+#    #+#             */
/*   Updated: 2026/05/04 18:32:16 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_H_
#define __INTERN_H_

#include <iostream>
#include <string>
#include <list>
#include "AForm.hpp"
#include <map>

class Intern
{
    public:

        Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &other);
        ~Intern();
        AForm *makeForm(std::string form, std::string target);
        
};

#endif