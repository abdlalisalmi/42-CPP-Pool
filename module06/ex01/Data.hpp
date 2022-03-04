/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:16:59 by aes-salm          #+#    #+#             */
/*   Updated: 2022/03/04 11:19:57 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
	private:
		int number;
		std::string str;

	public:
		Data(int, std::string);
		~Data();

		std::string getStr(void) const;
		int getNumber(void) const;
};

#endif