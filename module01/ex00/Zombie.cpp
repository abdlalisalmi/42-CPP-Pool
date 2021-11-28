/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 22:53:53 by aes-salm          #+#    #+#             */
/*   Updated: 2021/11/26 23:12:15 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    _name = name;
}

Zombie::~Zombie() {
    std::cout << "Destructor called on zombie " << _name << std::endl;
}

void Zombie::announce(void) {
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}