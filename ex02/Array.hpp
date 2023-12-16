/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 15:58:37 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/16 17:04:55 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>


template<class T>
class Array
{
    private:
    T   *tab;
    T    len;

    public:
    Array() : len(8) {tab = new T[]};
    Array(int nb) : len(nb) {tab = new T[nb]; for (size_t i = 0; i < nb; i++) {T[i] = 1;};};
    Array(const Array &objs) : {}
    Array   &operator=(const Array &objs) {if (this != &objs) {~Array(); objs.} return *this;}
    ~Array() {delete [] tab};
};


#endif