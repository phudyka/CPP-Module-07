/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:39:20 by phudyka           #+#    #+#             */
/*   Updated: 2024/01/29 11:48:47 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP 
# define ITER_HPP 

#include <iostream>

template<typename T>
void	iter(T *array, size_t length, void (*func)(T const &))
{
    for (size_t i = 0; i < length; ++i)
        func(array[i]);
}

template<typename T>
void print(const T &element)
{
    std::cout << element << " ";
}

template<typename T>
void doubleElement(T &element)
{
    element *= 2;
}

#endif