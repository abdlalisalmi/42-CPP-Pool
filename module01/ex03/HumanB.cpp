/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:49:50 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/02 20:17:59 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
}
HumanB::~HumanB() {
}

void HumanB::attack(void) const {
    std::cout << this->name << " attacks with his " << weapon->getType() <<std::endl;
}

void HumanB::setWeapon(Weapon weapon) {
    this->weapon = &weapon;
}