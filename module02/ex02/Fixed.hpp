/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:38:45 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/21 00:00:33 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
    private:
        int _fixedPointValue;
        static const int _fracBits;
    
    public:
        Fixed( void );
        Fixed( const Fixed &obj );
        Fixed( const int value);
        Fixed( const float value);
        ~Fixed( void );
        
        Fixed &operator=( const Fixed &obj);
        bool operator>( const Fixed &obj) const;
        bool operator>=( const Fixed &obj) const;
        bool operator<( const Fixed &obj) const;
        bool operator<=( const Fixed &obj) const;
        bool operator==( const Fixed &obj) const;
        bool operator!=( const Fixed &obj) const;
        float operator+( const Fixed &obj) const;
        float operator-( const Fixed &obj) const;
        float operator*( const Fixed &obj) const;
        float operator/( const Fixed &obj) const;

        Fixed operator++( void );
        Fixed operator++( int );
        Fixed operator--( void );
        Fixed operator--( int );

        static Fixed &min( Fixed &obj1, Fixed &obj2 );
        static Fixed &max( Fixed &obj1, Fixed &obj2 );
        static Fixed const &min( Fixed const &obj1, Fixed const &obj2 );
        static Fixed const &max( Fixed const &obj1, Fixed const &obj2 );

        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream &operator<<( std::ostream& cout, const Fixed &obj);

#endif