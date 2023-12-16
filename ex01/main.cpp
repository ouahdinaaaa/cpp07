/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:12:36 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/16 15:42:38 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    iter(int *tab, int len, void(*f)(int))
{
    int i = 0;
    while (i < len){
        (*f)(tab[i]);
        i++;
    }
}

void    afficher(int num)
{
    std::cout << "Num : " << num << std::endl;
}


int main(void)
{
    int tab[5] = {1, 2, 3, 4, 5};
    
    iter(tab, 5, afficher);
   
}