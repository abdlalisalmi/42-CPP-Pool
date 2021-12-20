/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:38:11 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/21 00:08:58 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
    std::cout << std::endl << "----- Test ' > ' operator -----:" << std::endl;
    std::cout << "2 > 2 --> " << bool(Fixed(2) > Fixed(2)) << std::endl;
    std::cout << "2 > 3 --> " << bool(Fixed(2) > Fixed(3)) << std::endl;
    std::cout << "5 > 3 --> " << bool(Fixed(5) > Fixed(3)) << std::endl;
    std::cout << "-------------------------------:" << std::endl;

    std::cout << std::endl << "----- Test ' >= ' operator -----:" << std::endl;
    std::cout << "2 >= 2 --> " << bool(Fixed(2) >= Fixed(2)) << std::endl;
    std::cout << "2 >= 3 --> " << bool(Fixed(2) >= Fixed(3)) << std::endl;
    std::cout << "5 >= 3 --> " << bool(Fixed(5) >= Fixed(3)) << std::endl;
    std::cout << "-------------------------------:" << std::endl;

    std::cout << std::endl << "----- Test ' < ' operator -----:" << std::endl;
    std::cout << "2 < 2 --> " << bool(Fixed(2) < Fixed(2)) << std::endl;
    std::cout << "2 < 3 --> " << bool(Fixed(2) < Fixed(3)) << std::endl;
    std::cout << "5 < 3 --> " << bool(Fixed(5) < Fixed(3)) << std::endl;
    std::cout << "-------------------------------:" << std::endl;

    std::cout << std::endl << "----- Test ' <= ' operator -----:" << std::endl;
    std::cout << "2 <= 2 --> " << bool(Fixed(2) <= Fixed(2)) << std::endl;
    std::cout << "2 <= 3 --> " << bool(Fixed(2) <= Fixed(3)) << std::endl;
    std::cout << "5 <= 3 --> " << bool(Fixed(5) <= Fixed(3)) << std::endl;
    std::cout << "-------------------------------:" << std::endl;

    std::cout << std::endl << "----- Test ' == ' operator -----:" << std::endl;
    std::cout << "2 == 2 --> " << bool(Fixed(2) == Fixed(2)) << std::endl;
    std::cout << "2 == 3 --> " << bool(Fixed(2) == Fixed(3)) << std::endl;
    std::cout << "5 == 3 --> " << bool(Fixed(5) == Fixed(3)) << std::endl;
    std::cout << "-------------------------------:" << std::endl;

    std::cout << std::endl << "----- Test ' != ' operator -----:" << std::endl;
    std::cout << "2 != 2 --> " << bool(Fixed(2) != Fixed(2)) << std::endl;
    std::cout << "2 != 3 --> " << bool(Fixed(2) != Fixed(3)) << std::endl;
    std::cout << "5 != 3 --> " << bool(Fixed(5) != Fixed(3)) << std::endl;
    std::cout << "-------------------------------:" << std::endl;

    std::cout << std::endl << "----- Test ' + ' operator -----:" << std::endl;
    std::cout << "2 + 2 --> " << (Fixed(2) + Fixed(2)) << std::endl;
    std::cout << "-------------------------------:" << std::endl;

    std::cout << std::endl << "----- Test ' - ' operator -----:" << std::endl;
    std::cout << "5 + 2 --> " << (Fixed(5) - Fixed(2)) << std::endl;
    std::cout << "-------------------------------:" << std::endl;

    std::cout << std::endl << "----- Test ' * ' operator -----:" << std::endl;
    std::cout << "5 * 2 --> " << (Fixed(5) * Fixed(2)) << std::endl;
    std::cout << "-------------------------------:" << std::endl;

    std::cout << std::endl << "----- Test ' / ' operator -----:" << std::endl;
    std::cout << "5 / 2 --> " << (Fixed(5) / Fixed(2)) << std::endl;
    std::cout << "-------------------------------:" << std::endl;

    Fixed a;
    Fixed c(3);

    std::cout << std::endl << "----- Test ++a and a++ -----" << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << "----------------------------" << std::endl;

    std::cout << std::endl << "----- Test --c and c-- -----" << std::endl;
    std::cout << c << std::endl;
    std::cout << --c << std::endl;
    std::cout << c << std::endl;
    std::cout << c-- << std::endl;
    std::cout << c << std::endl;
    std::cout << "----------------------------" << std::endl;


    std::cout << std::endl << "----- Test MAX -----" << std::endl;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << "b=" << b << " " << "a=" << a << std::endl;
    std::cout << "max(a, b) --> ";
    std::cout << Fixed::max(a, b) << std::endl;
    std::cout << "----------------------------" << std::endl;

    std::cout << std::endl << "----- Test MIN -----" << std::endl;
    std::cout << "b=" << b << " " << "a=" << a << std::endl;
    std::cout << "min(a, b) --> ";
    std::cout << Fixed::min(a, b) << std::endl;
    std::cout << "----------------------------" << std::endl;
    return 0;
}