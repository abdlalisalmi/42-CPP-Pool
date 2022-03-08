/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:44:37 by aes-salm          #+#    #+#             */
/*   Updated: 2022/03/08 11:57:43 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) {
	std::cout << x << std::endl;
}

int main() {

	std::string words[] = { "hello", "world"};
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	::iter( words, 2, print );
	::iter( tab, 5, print );
	::iter( tab2, 5, print );

	return 0;
}