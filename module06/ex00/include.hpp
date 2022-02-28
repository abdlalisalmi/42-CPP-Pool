/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 22:55:24 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/28 21:41:02 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef INCLUDE_HPP
#define INCLUDE_HPP

#include <iostream>
#include <string>
#include <ctype.h>
#include <sstream>
#include <climits>

bool isPseudoLiterals(std::string arg);
void convertPseudoLiterals(std::string arg);

void convertToChar(char *arg);
void convertToInt(char *arg);
void convertToFloat(char *arg);
void convertToDouble(char *arg);


#endif