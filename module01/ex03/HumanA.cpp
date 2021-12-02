/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:36:44 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/02 16:46:39 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon) { // initialize type reference in instructure.
    this->name = name;
}
HumanA::~HumanA() {
}

void HumanA::attack(void) const {
    std::cout << this->name << " attacks with his " << weapon.getType() <<std::endl;
}