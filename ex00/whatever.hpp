/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:31:40 by phudyka           #+#    #+#             */
/*   Updated: 2024/01/29 11:36:21 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
const T& min(const T &a, const T &b)
{
    if (a < b)
        return (a);
    return (b);
}

template<typename T>
const T& max(const T &a, const T &b)
{
    if (a > b)
        return (a);
    return (b);
}

#endif

