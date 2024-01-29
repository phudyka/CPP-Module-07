/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:39:22 by phudyka           #+#    #+#             */
/*   Updated: 2024/01/29 11:49:16 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    std::cout << "Printing intArray: ";
    iter(intArray, 5, print<int>);
    std::cout << std::endl;

    std::cout << "Printing doubleArray: ";
    iter(doubleArray, 5, print<double>);
    std::cout << std::endl;

    std::cout << "Printing charArray: ";
    iter(charArray, 5, print<char>);
    std::cout << std::endl;

    return 0;
}
