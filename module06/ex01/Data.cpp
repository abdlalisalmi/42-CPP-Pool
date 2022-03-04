/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:20:12 by aes-salm          #+#    #+#             */
/*   Updated: 2022/03/04 11:22:54 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(int number, std::string str) {
	this->number = number;
	this->str = str;
}
Data::~Data(){}

int Data::getNumber(void) const {
	return this->number;
}

std::string Data::getStr(void) const {
	return this->str;
}