/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:41:44 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/16 12:47:22 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <string>
#include <iostream>

template <typename T>
T max(const T& a,const T& b)
{
   if(a>b)
      return a;
   else
      return b;
}

template <typename T>
T min(const T& a, const T& b)
{
    if (a < b)
        return a;
    else
        return b;
}

template <typename T>

void swap(T &a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

#endif