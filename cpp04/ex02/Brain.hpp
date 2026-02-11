/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-11 00:28:39 by erocha-l          #+#    #+#             */
/*   Updated: 2026-02-11 00:28:39 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
#define _BRAIN_HPP_
#include <string>
#include <iostream>


class Brain
{

    private:
        std::string ideas[100];

    public:
        Brain(void);
        Brain(const Brain &copy);
        Brain &operator=(const Brain &other);
        ~Brain(void);

};

#endif