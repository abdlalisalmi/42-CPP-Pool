/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 19:31:04 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/22 22:24:37 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
protected:
public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ~ScavTrap();

    ScavTrap &operator=(const ScavTrap &other);

    void attack( std::string const &target );
    void guardGate();
};

#endif