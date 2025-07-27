/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 01:46:06 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/07 10:35:19 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstdlib>
#include <ctime>

template <typename T>
class Array {

    private:
        T       *ptr;
        size_t  len;
    
    public:
        Array() {
            ptr = NULL;
            len = 0;
        }
        Array(size_t n){
            len = n;
            ptr = new T[len]();
        }
        ~Array(){
            delete[] ptr;
        }

        Array(const Array& obj) {
            len = obj.len;
            ptr = new T[len]();
            for (size_t i = 0; i < len; i++) {
                ptr[i] = obj.ptr[i];
            }
        }

        Array& operator=(const Array& obj) {
            if (this != &obj) {
                len = obj.len;
                delete[] ptr;
                ptr = new T[len]();
                for (size_t i = 0; i < len; i++) {
                    ptr[i] = obj.ptr[i];
                }
            }
            return *this;
        }

        T&  operator[](const size_t idx) {
            if (idx >= len)
                throw std::out_of_range("Index is out of bounds");
            return ptr[idx];
        }

        const T&  operator[](const size_t idx) const {
            if (idx >= len)
                throw std::out_of_range("Index is out of bounds");
            return ptr[idx];
        }

        size_t size() const {
            return len;
        }

};

#endif
