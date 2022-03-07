/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:14:33 by aes-salm          #+#    #+#             */
/*   Updated: 2022/03/07 19:44:00 by aes-salm         ###   ########.fr       */
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
		unsigned int _size;
		T * _array;
		
	public:
		Array(void): _size(0), _array(NULL) {}

		Array(unsigned int n): _size(n) {
            _array = new T[_size];
        }

		Array(T const &other) {
			*this = other;
        }

		Array<T>& operator= (const Array<T>& other) {
			if (this != other) {
				if (this->_array) delete [] this->_array;
				this->_size = other.size();
				this->_array = new T[this->_size];
				for (unsigned int i = 0; i < this->_size; i++)
					this->_array[i] = other._array[i];
			}
			return *this;
		}

		Array<T>& operator[](unsigned int index) {
			if (index >= this->size()) {
				throw std::out_of_range ("The Index is greater than the Array size.");
			}
			return this->_array[index];
		}
		
		unsigned int size(void) const {
			return _size;
		}

		void print(void) const {
			std::cout << "Content: ";
			for (unsigned int i = 0; i < _size; i++)
				std::cout << _array[i] << " ";
			std::cout << std::endl;
		}

};

template <typename T>
std::ostream & operator<<( std::ostream & o, Array <T> const & obj) {
	o << &obj;
	return o;
}

#endif