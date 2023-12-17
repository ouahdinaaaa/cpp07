/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 15:58:37 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/17 15:09:34 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <ctime>

template<class T>
class Array
{
    private:
    T    _len;
    T   *_tab;

    public:
    Array() : _len(0) , _tab(new T[0]) {};
    Array(unsigned int nb) : _len(nb), _tab(new T[nb + 1]) {};
    Array(const Array &objs) {
        this->_len = objs._len;
        this->_tab = new T[objs._len];
        for (int i = 0; i < objs._len; i++){
            this->_tab[i] = objs._tab[i];
        }
    }
    ~Array() {delete [] this->_tab;}
    T& operator[](unsigned int index){
        if ((int)index > this->_len) 
            throw OutOfRangeException();
        if ((int)index < 0) 
            throw OutOfRangeException();
        return this->_tab[index];}
        
        Array   &operator=(const Array &objs) {
            if (this != &objs) { 
            ~Array(); 
            this->_len = objs._len; 
            this->_tab = new T[objs._len]; 
            for (int i = 0; i < objs._len; i++) {
                this->_tab[i] = objs._tab[i];}}
            return *this;
            }
            
        unsigned int menbre_size() {return this->_len;}
        class OutOfRangeException : public std::exception
        {
            public :
            const char * what() const throw()
            {
                return ("Element is out of range of array");
            }
        };
};


#endif