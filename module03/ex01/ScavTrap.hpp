/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 19:31:04 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/24 23:07:09 by aes-salm         ###   ########.fr       */
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
    ScavTrap( const ScavTrap &other);
    ~ScavTrap();

    ScavTrap &operator=(const ScavTrap &other);

    void attack( std::string const &target );
    void guardGate();
};

#endif