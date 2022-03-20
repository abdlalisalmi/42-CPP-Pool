/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:20:21 by aes-salm          #+#    #+#             */
/*   Updated: 2022/03/20 18:58:54 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

class Span
{
private:
	unsigned int N;
	std::vector<int> array;
	
public:
	Span(void);
	~Span();
	Span(unsigned int N);
	Span(Span const & other);
	Span &operator=(Span const &other);

	void addNumber(int nb);
	int shortestSpan(void);
	int longestSpan(void);
	void addMultipleNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	void print(void);
};


#endif