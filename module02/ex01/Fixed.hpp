/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:38:45 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/16 20:34:58 by aes-salm         ###   ########.fr       */
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

        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream &operator<<( std::ostream& cout, const Fixed &obj);

#endif