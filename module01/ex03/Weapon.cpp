/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:19:48 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/02 16:38:25 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    this->type = type;
}

Weapon::~Weapon() {
}

const std::string& Weapon::getType(void) const {
    const std::string &type = this->type;
    return type;
}

void Weapon::setType(std::string type) {
    this->type = type;
}