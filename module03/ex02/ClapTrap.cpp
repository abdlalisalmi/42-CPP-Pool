/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:50:47 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/05 18:39:30 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap : Defualt constructor called" << std::endl;
	setHitPoints(10);
    setEnergyPoints(10);
    setAttackDamage(0);
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap : Constructor called" << std::endl;
    setName(name);
    setHitPoints(10);
    setEnergyPoints(10);
    setAttackDamage(0);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap : Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap : Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap : Assignation operator called" << std::endl;
    if (this != &other) {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

// Setter functions

void ClapTrap::setName(std::string name) 
{
    this->_name = name;
}

void ClapTrap::setHitPoints(unsigned int hitPoints) 
{
    this->_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints) 
{
    this->_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage) 
{
    this->_attackDamage = attackDamage;
}

// Getter functions

std::string ClapTrap::getName(void) const
{
    return this->_name;
}

unsigned int ClapTrap::getHitPoints(void) const 
{
    return this->_hitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void) const 
{
    return this->_energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void) const 
{
    return this->_attackDamage;
}

// Exercices functions

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap : " << getName() << " attack " << target <<
                ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap : " << getName() << " takeDamage with "
              << amount << " points of damage!" << std::endl;
    std::cout << " + Energy points before: " << getEnergyPoints() << std::endl;
    setEnergyPoints(this->_energyPoints - amount);
    std::cout << " + Energy points after: " << getEnergyPoints() << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    std::cout << "ClapTrap : " << getName() << " beRepaired with "
              << amount << " of energy points!" << std::endl;
    std::cout << " + Energy points before: " << getEnergyPoints() << std::endl;
    setEnergyPoints(this->_energyPoints + amount);
    std::cout << " + Energy points after: " << getEnergyPoints() << std::endl;
}