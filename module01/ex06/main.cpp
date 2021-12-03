/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 00:10:41 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/03 00:21:59 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Invalid args!" << std::endl;
        return 1;
    }
    std::string level = argv[1];
    Karen karen;
    karen.complain(level);
    return 0;
}