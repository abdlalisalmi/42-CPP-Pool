/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:55:38 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/28 13:41:43 by aes-salm         ###   ########.fr       */
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