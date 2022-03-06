/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:14:33 by aes-salm          #+#    #+#             */
/*   Updated: 2022/03/06 21:49:28 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		int _size;
		T * _array;
		
	public:
		Array(void) {
			this->_array = new T;
		}
		Array(unsigned int n): _size(n) {
            this->_array = new T[n];
        }

		T getArray(void) const {
			return this->_array;
		}

		int size(void) const {
			return this->_size;
		}
};
template <typename T>
std::ostream & operator<<( std::ostream & o, Array<T> const & obj) {
	o << obj.getArray();
	return o;
}

#endif