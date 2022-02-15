/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:40:11 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/15 11:45:01 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <ostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string target;

public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string);
	RobotomyRequestForm(RobotomyRequestForm const &);
	~RobotomyRequestForm();
	
	RobotomyRequestForm &operator=(RobotomyRequestForm const &);
	void execute(Bureaucrat const & executor) const;
};

#endif