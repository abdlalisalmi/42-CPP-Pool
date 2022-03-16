/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:18:22 by aes-salm          #+#    #+#             */
/*   Updated: 2022/03/16 14:34:20 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm> // for ::fine
#include <vector> // for vectors
#include <array> // for arrays
#include <stack> // for stacks
#include <queue> // for queues

template <typename T>
int easyFind(T vec, int occurrence) { // for handle Vectors and Arrays
	typename T::iterator iter;
	iter = std::find(vec.begin(), vec.end(), occurrence);
	if (iter != vec.end()) return (iter - vec.begin());
	throw std::runtime_error("Occurrence not found!");
}

template <typename T>
int easyFind(std::stack<T> stack, int occurrence) { // for handle stacks First-In Last-Out
	std::vector<T> vec;
	size_t stack_len = stack.size();
	for (size_t i = 0; i < stack_len; i++)
	{
		vec.push_back(stack.top());
		stack.pop();
	}
	return easyFind(vec, occurrence);
}

template <typename T>
int easyFind(std::queue<T> queue, int occurrence) { // for handle queues First-In First-Out
	std::vector<T> vec;
	size_t queue_len = queue.size();
	for (size_t i = 0; i < queue_len; i++)
	{
		vec.push_back(queue.front());
		queue.pop();
	}
	return easyFind(vec, occurrence);
}

#endif