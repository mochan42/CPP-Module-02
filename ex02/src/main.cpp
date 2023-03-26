/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:40:28 by moninechan        #+#    #+#             */
/*   Updated: 2023/03/26 10:38:03 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

int main()
{
	// Fixed a (42);
	// Fixed b (21.19f);
	// Fixed c (42);

	// std::cout << "a: " << a << "\n";
	// std::cout << "b: " << b <<  "\n";
	// std::cout << "c: " << c <<  "\n";
	// std::cout << "\n======= Comparison operators =======\n";
	// std::cout << "a > b: " << (a > b) << " (Expected: 1)\n";
	// std::cout << "a < b: " << (a < b) << " (Expected: 0)\n";
	// std::cout << "a >= b: " << (a >= b) << " (Expected: 1)\n";
	// std::cout << "a <= b: " << (a <= b) << " (Expected: 0)\n";
	// std::cout << "a >= c: " << (a >= c) << " (Expected: 1)\n";
	// std::cout << "a <= c: " << (a <= c) << " (Expected: 1)\n";
	// std::cout << "a == b: " << (a == b) << " (Expected: 0)\n";
	// std::cout << "a == c: " << (a == c) << " (Expected: 1)\n";
	// std::cout << "a != b: " << (a != b) << " (Expected: 1)\n";
	// std::cout << "a != c: " << (a != c) << " (Expected: 0)\n";
	// std::cout << "\n======= Arithmetic operators =======\n";
	// std::cout << "a + b: " << (a + b) << " (Expected: 63.19)\n";
	// std::cout << "a - b: " << (a - b) << " (Expected: 20.81)\n";
	// std::cout << "a * b: " << (a * b) << " (Expected: 889.98)\n";
	// std::cout << "a ""/"" b: " << (a / b) << " (Expected: 1.98)\n";
	// std::cout << "\n======= Increment / Decrement =======\n";
	// std::cout << "a: " << a << "\n";
	// std::cout << "result a++: " << (a++) << "\n";
	// std::cout << "a: " << a << "\n";
	// std::cout << "result ++a: " << (++a) << "\n";
	// std::cout << "a: " << a << "\n";
	// std::cout << "result a--: " << (a--) << "\n";
	// std::cout << "a: " << a << "\n";
	// std::cout << "result --a: " << (--a) << "\n";
	// std::cout << "a: " << a << "\n\n";
	// std::cout << "\n======= Min / Max =======\n";
	// std::cout << "min(a,b): " << (Fixed::min(a,b)) << "\n";
	// std::cout << "max(a,b): " << (Fixed::max(a,b)) << "\n";

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
