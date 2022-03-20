/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:19:45 by aes-salm          #+#    #+#             */
/*   Updated: 2022/03/20 12:52:13 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int generateRandomNumber() {
	return std::rand() % 100;
}

int main() {
	{
		std::cout << std::endl << "------------- Test with 5 elements -------------" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		try
		{
			sp.addNumber(25);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	
	{
		std::cout << std::endl << "------------- Test with 20 000 elements -------------" << std::endl;
		Span sp = Span(20000);
		for (size_t i = 0; i < 20000; i++)
		{
			sp.addNumber(rand() % 100);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	
	{
		std::cout << std::endl << "------------- Test with 0 elements -------------" << std::endl;
		Span sp = Span(0);
		try
		{
			std::cout << "shortestSpan(): " << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << "longestSpan(): " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	{
		std::cout << std::endl << "------------- Test addMultipleNumbers -------------" << std::endl;
		std::vector<int> vec(100);
		std::generate(vec.begin(), vec.end(), generateRandomNumber);
		Span sp(100);
		sp.addMultipleNumbers(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	return 0;
}