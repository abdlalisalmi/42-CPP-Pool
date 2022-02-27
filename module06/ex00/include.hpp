/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 22:55:24 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/27 16:23:20 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef INCLUDE_HPP
#define INCLUDE_HPP

#include <iostream>
#include <string>
#include <ctype.h>

int isChar(std::string arg);

void convertToChar(char *arg);
void convertToInt(char *arg);
void convertToFloat(char *arg);
void convertToDouble(char *arg);

#endif