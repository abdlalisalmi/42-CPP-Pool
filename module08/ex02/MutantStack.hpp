/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:07:20 by aes-salm          #+#    #+#             */
/*   Updated: 2022/03/21 21:08:08 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		/* data */
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		~MutantStack(){};
		MutantStack(void){};
		MutantStack(MutantStack const &other) {
			*this = other;
		};

		MutantStack &operator=(MutantStack const &other) {
			if (*this != other) {
				this->c = other.c;
			}
			return *this;
		};

		iterator begin(void) {
			return this->c.begin();
		}
		
		iterator end(void) {
			return this->c.end();
		}
};

#endif