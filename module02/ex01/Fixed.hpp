/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:38:45 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/12 14:42:22 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
    private:
        int _fp;
        static const int _nf = 8;

    public:
        Fixed( void );
        Fixed( const Fixed &obj );
        ~Fixed( void );

        Fixed &operator=( Fixed &obj);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif