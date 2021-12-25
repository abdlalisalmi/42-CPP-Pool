/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:55:35 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/24 22:49:16 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "DiamondTrap : Defualt constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap : Constructor called" << std::endl;
    this->_name = name;
    // this->ScavTrap::_name = name + "_clap_name";
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap : Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
    std::cout << "DiamondTrap : Copy constructor called" << std::endl;
    *this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "DiamondTrap : Assignation operator called" << std::endl;
    if (this != &other) {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name is " << this->_name << std::endl;
    std::cout << "ClapTrap name is " << this->_name << std::endl;
}

void DiamondTrap::attack( std::string const &target )
{
    ScavTrap::attack(target);
}