/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 13:48:17 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/29 16:18:35 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    private:
        /* data */
    public:
        ~WrongCat();
        WrongCat( void );
        WrongCat( WrongCat const & );
        WrongCat &operator=( WrongCat const &);

        void makeSound( void ) const;
};

#endif