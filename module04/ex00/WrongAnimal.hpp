/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:42:09 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/07 11:13:06 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
        
    public:
        WrongAnimal( void );
        WrongAnimal( std::string );
        virtual ~WrongAnimal();
        WrongAnimal( WrongAnimal const &);
        WrongAnimal &operator=( WrongAnimal const &);

        void setType( std::string );
        std::string getType( void ) const;

        void makeSound( void ) const;
};

#endif