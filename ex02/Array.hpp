/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 15:58:37 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/17 11:34:09 by ayael-ou         ###   ########.fr       */
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
    T   *_tab;
    T    _len;

    public:
    Array() : _len(0) , _tab(new T[0]) {};
    Array(unsigned int nb) : _len(nb), _tab(new T[nb]) {};
    Array(const Array &objs) : { *this = objs;}
    ~Array() {delete [] tab};
    T& operator[](unsigned int index){
        if (index >= this->len || index < 0) 
            throw OutofRangeExecption();
        return this->array[index];}
        
    Array   &operator=(const Array &objs) {if (this != &objs) {~Array(); this->_len = objs._len; this->_tab = new T[objs._len]; for (unsigned int i = 0; i < objs._len; i++) {this->_tab[i] = objs._tab[i];} return *this}
    unsigned int menbre_size() {return this->len;}
    class OutofRangeExecption : public std::OutofRangeExecption{
        public :
        const char * what() const throw()
        {
            return ("Element is out of range of array");
        }
    };
};


#endif