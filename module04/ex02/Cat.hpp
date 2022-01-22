/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 13:48:17 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/29 16:07:59 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
    private:
        /* data */
    public:
        ~Cat();
        Cat( void );
        Cat( Cat const & );
        Cat &operator=( Cat const &);

        void makeSound( void ) const;
};

#endif