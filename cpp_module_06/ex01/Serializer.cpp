/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:48:26 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/06 12:06:37 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


Serializer::Serializer() {
}

Serializer::~Serializer() {
}
Serializer::Serializer(const Serializer& other) {
    (void)other;
}
Serializer& Serializer::operator=(const Serializer& other) {
    (void)other;

    return *this;
}

uintptr_t   Serializer::serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data*   Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}


