/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:49:29 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/21 22:28:44 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string _name;
    static unsigned int _hitPoints;
    static unsigned int _energyPoints;
    static unsigned int _attackDamage;

public:
    ClapTrap( std::string name );
    ClapTrap( void );
    ~ClapTrap();
    ClapTrap &operator=( const ClapTrap &other );

    void setName( std::string name );
    void setHitPoints( unsigned int hitPoints );
    void setEnergyPoints( unsigned int energyPoints );
    void setAttackDamage( unsigned int attackDamage );
    
    std::string getName( void ) const;
    unsigned int getHitPoints( void ) const;
    unsigned int getEnergyPoints( void ) const;
    unsigned int getAttackDamage( void ) const;

    void attack( std::string const &target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );
};


#endif