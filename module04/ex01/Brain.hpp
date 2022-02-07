/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:43:39 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/07 11:25:16 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string _ideas[100];

public:
	Brain(void);
	~Brain();
	Brain(Brain const &);
	Brain &operator=(Brain const &);
	void setIdea(std::string idea, size_t index);
	std::string getIdea(size_t index);
};

#endif