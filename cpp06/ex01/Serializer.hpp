/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 20:35:54 by erick             #+#    #+#             */
/*   Updated: 2026/05/10 21:00:53 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZER_H__
#define __SERIALIZER_H__
#include <stdint.h>
#include <iostream>
#include "Data.hpp"


class Serializer
{
    private:
        Serializer();
        ~Serializer();
        Serializer(const Serializer &copy);
        Serializer& operator=(const Serializer &other);

    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif