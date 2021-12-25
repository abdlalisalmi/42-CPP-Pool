/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:55:38 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/24 22:47:46 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
    std::string _name;
    using FragTrap::_hitPoints;
    using FragTrap::_attackDamage;
    using ScavTrap::_energyPoints;

public:
    DiamondTrap( std::string name );
    DiamondTrap( void );
    ~DiamondTrap();
    DiamondTrap( const DiamondTrap &other);

    DiamondTrap &operator=( const DiamondTrap &other );

    void whoAmI();
    void attack( std::string const &target );
};

#endif