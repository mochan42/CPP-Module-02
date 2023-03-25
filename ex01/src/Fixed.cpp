/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:40:20 by moninechan        #+#    #+#             */
/*   Updated: 2023/03/25 20:57:08 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed()
{
	std::cout << GREEN << "Default constructor called" << D << "\n";
	this->_fixedPointNumberValue = 0;
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << YELL << "Copy constructor called" << D << "\n";
	*this = src;
}

Fixed::Fixed(const int n)
{
	std::cout << GREEN << "Int constructor called" << D << "\n";
	Fixed::_fixedPointNumberValue = n * (1 << Fixed::_fractionalBits);
}

Fixed::Fixed(const float f)
{
	std::cout << GREEN << "Float constructor called" << D << "\n";
	Fixed::_fixedPointNumberValue = f * (1 << Fixed::_fractionalBits) + (f >= 0 ? 0.5 : -0.5);
}

Fixed::~Fixed()
{
	std::cout << RED << "Destructor called" << D << "\n";
}

Fixed&	Fixed::operator=(const Fixed& src)
{
	std::cout << BLU << "Copy assignment operator called" << D << "\n";
	this->_fixedPointNumberValue = src._fixedPointNumberValue ;
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	// std::cout << CY << "getRawBits member function called" << D << "\n";
	return (this->_fixedPointNumberValue);
}

void	Fixed::setRawBits( int const raw )
{
	_fixedPointNumberValue = raw;
}

float	Fixed::toFloat( void ) const
{
	return (_fixedPointNumberValue / (float)(1 << _fractionalBits));
}

int		Fixed::toInt( void ) const
{
	return (_fixedPointNumberValue / (1 << _fractionalBits));
}

std::ostream& operator<<( std::ostream& outputStream, const Fixed& number )
{
	outputStream << number.toFloat();
	return (outputStream);
}
