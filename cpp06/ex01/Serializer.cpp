/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 17:37:07 by erocha-l          #+#    #+#             */
/*   Updated: 2026/05/10 21:12:20 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}
Serializer::~Serializer() {}
Serializer& Serializer::operator=(const Serializer &other) { (void)other; return *this; }
Serializer::Serializer(const Serializer &copy) { (void)copy; }

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t ret;

    ret = reinterpret_cast<uintptr_t>(ptr);
    return(ret);
};

Data* Serializer::deserialize(uintptr_t raw)
{
    Data *ret;

    ret = reinterpret_cast<Data*>(raw);
    return (ret);
};
