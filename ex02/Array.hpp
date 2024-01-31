/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:53:11 by phudyka           #+#    #+#             */
/*   Updated: 2024/01/31 14:48:28 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <stdexcept>
#include <cstdlib>

#define MAX_VAL 750

template <typename T>
class Array
{
	private:
		T* data;
		unsigned int size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T>& other);
		Array<T>& operator=(const Array<T>& other);
		~Array();
		T& operator[](unsigned int index);
	
		unsigned int	getSize() const;
};

template <typename T>
Array<T>::Array() : data(0), size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : size(n)
{
    data = new T[size]();
}

template <typename T>
Array<T>::Array(const Array<T>& other) : size(other.size)
{
    data = new T[size];

    for (unsigned int i = 0; i < size; ++i)
        data[i] = other.data[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
    if (this != &other)
	{
        delete[] data;
        size = other.size;
        data = new T[size];
        for (unsigned int i = 0; i < size; ++i)
            data[i] = other.data[i];
    }
    return (*this);
}

template <typename T>
Array<T>::~Array()
{
    delete[] (data);
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= size)
        throw std::out_of_range("Index out of bounds");
    return (data[index]);
}

template <typename T>
unsigned int Array<T>::getSize() const
{
    return (size);
}

#endif