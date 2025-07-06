/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:48:26 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/02 21:33:22 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


Serializer::Serializer(/* args */) {
    // This constructor is intentionally left empty.
    // The class is designed to be a utility class with static methods,
    // so it does not need to maintain any state or have an instance.
}

Serializer::~Serializer() {
    // This destructor is intentionally left empty.
    // The class is designed to be a utility class with static methods,
    // so it does not need to perform any cleanup.
}
Serializer::Serializer(const Serializer& other) {
    // This copy constructor is intentionally left empty.
    // The class is designed to be a utility class with static methods,
    // so it does not need to maintain any state or have an instance.
    (void)other; // Avoid unused parameter warning
}
Serializer& Serializer::operator=(const Serializer& other) {
    // This assignment operator is intentionally left empty.
    // The class is designed to be a utility class with static methods,
    // so it does not need to maintain any state or have an instance.
    (void)other; // Avoid unused parameter warning

    return *this;
}

uintptr_t   Serializer::serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data*   Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}


