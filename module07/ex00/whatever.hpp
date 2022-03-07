/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:42:05 by aes-salm          #+#    #+#             */
/*   Updated: 2022/03/07 22:31:40 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename S>
void swap(S &a, S &b) {
	S tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename MIN>
MIN min(MIN &a, MIN &b) {
	return (a < b) ? a : b;
}

template <typename MAX>
MAX max(MAX &a, MAX &b) {
	return (a > b) ? a : b;
}

#endif