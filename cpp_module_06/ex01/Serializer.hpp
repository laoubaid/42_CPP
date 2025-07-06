/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:48:24 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/02 21:32:48 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SERIALIZER_HPP_
# define _SERIALIZER_HPP_

# include "Data.hpp"
# include <stdint.h>

class Serializer
{        
    public:
        Serializer();
        ~Serializer();
        Serializer(const Serializer& other);
        Serializer& operator=(const Serializer& other);

        static uintptr_t   serialize(Data* ptr);
        static Data*       deserialize(uintptr_t raw);

        // should a static class follow canonical form?
        // or should it be a singleton?
        // the answer is no, because it does not have a state
        // so it does not need to follow the canonical form
        // it is just a utility class to serialize and deserialize Data objects
};

#endif
