/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:42:09 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/07 11:42:33 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal( void );
        Animal( std::string );
        virtual ~Animal();
        Animal( Animal const &);
        Animal &operator=( Animal const &);

        void setType( std::string );
        std::string getType( void ) const;

        virtual void makeSound( void ) const;
};

#endif