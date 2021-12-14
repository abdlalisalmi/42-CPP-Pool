/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:38:45 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/14 01:37:52 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
    private:
        int _fixedPointValue;
        static const int _fracBits;
    
    public:
        Fixed( void );
        Fixed( const Fixed &obj );
        ~Fixed( void );
        
        Fixed &operator=( const Fixed &obj);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif