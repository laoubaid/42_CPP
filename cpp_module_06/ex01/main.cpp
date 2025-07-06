/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 00:16:41 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/02 01:08:44 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdint.h>
#include "Serializer.hpp"

int main()
{
    Data data;
    data.value = 1337;
    data.name = "ard jarda la ta3ama wla maa";

    uintptr_t raw = Serializer::serialize(&data);
    Data* deserializedData = Serializer::deserialize(raw);

    std::cout << "Original Data: " << data.value << ", " << data.name << std::endl;
    std::cout << "Deserialized Data: " << deserializedData->value << ", " << deserializedData->name << std::endl;

    return 0;
}
