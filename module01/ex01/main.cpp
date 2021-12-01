/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 23:09:32 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/01 14:02:38 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main() {
    int N = 10;
    std::string name = "Zombie_";
    Zombie *zombie_horde = zombieHorde(N, name);
    for (int i = 0; i < N; i++)
    {
        zombie_horde[i].announce();
        // *zombie_horde++;
    }
    return 0;
}