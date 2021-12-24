/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 10:43:57 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/24 11:51:21 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap : Defualt constructor called" << std::endl;
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}
FragTrap::FragTrap( std::string name)
{
    std::cout << "FragTrap : Constructor called" << std::endl;
    setName(name);
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap : Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap : Assignation operator called" << std::endl;
    if (this != &other)
    {
        setName(other._name);
        setHitPoints(other._hitPoints);
        setEnergyPoints(other._energyPoints);
        setAttackDamage(other._attackDamage);
    }
    return *this;
}

void FragTrap::highFiveGuys(void)
{
    std::cout << "FragTrap : positive high fives request" << std::endl;
}

void FragTrap::attack(std::string const &target)
{
    std::cout << "FragTrap " << getName() << " attack " << target <<
                ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}
