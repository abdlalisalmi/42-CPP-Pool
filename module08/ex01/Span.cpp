/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:20:13 by aes-salm          #+#    #+#             */
/*   Updated: 2022/03/20 12:56:11 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructors and Destructor //
Span::~Span(){}

Span::Span(){}

Span::Span(unsigned int N) {
	this->N = N;
}

Span::Span(Span const &other) {
	*this = other;
}

// Operators //
Span &Span::operator=(Span const &other) {
	if (this != &other) {
		this->N = other.N;
		for (size_t i = 0; i < other.array.size(); i++)
			this->array.push_back(other.array[i]);
	}
	return *this;
}

// Member Functions //

void Span::addNumber(int nb) {
	if (this->array.size() >= this->N) throw std::runtime_error("The Span is already full!");
	this->array.push_back(nb);
}

void Span::addMultipleNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (this->array.size() >= this->N || this->N - std::distance(begin, end) < 0)
		throw std::runtime_error("The Span is already full!");
	this->array.insert(this->array.end(), begin, end);
}

int Span::shortestSpan(void) {
	
	if (this->array.size() <= 1) throw std::runtime_error("No span can be found!");

	std::vector<int> copy = this->array;
	std::sort(copy.begin(), copy.end());
	int shortestSpan = copy[1] - copy[0];
	int newShortest = 0;
	for (size_t i = 0; i < copy.size() - 1; i++)
	{
		newShortest = copy[i + 1] - copy[i];
		if (newShortest < shortestSpan)
			shortestSpan = newShortest;
	}
	return shortestSpan;
}

int Span::longestSpan(void) {

	if (this->array.size() <= 1) throw std::runtime_error("No span can be found!");
	
	std::vector<int> copy = this->array;
	std::sort(copy.begin(), copy.end());
	return (copy.back() - copy.front());
}

void Span::print(void) {
	std::cout << "Span : ";
	for (size_t i = 0; i < array.size(); i++)		
		std::cout << array[i] << " ";
	std::cout << std::endl;
	
}