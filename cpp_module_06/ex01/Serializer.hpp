/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:48:24 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/06 12:07:17 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SERIALIZER_HPP_
# define _SERIALIZER_HPP_

# include "Data.hpp"
# include <stdint.h>

class Serializer
{
    private:
        Serializer();
        ~Serializer();
        Serializer(const Serializer& other);
        Serializer& operator=(const Serializer& other);

    public:

        static uintptr_t   serialize(Data* ptr);
        static Data*       deserialize(uintptr_t raw);

};

#endif
