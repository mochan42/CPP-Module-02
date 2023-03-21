/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:40:20 by moninechan        #+#    #+#             */
/*   Updated: 2023/03/21 20:12:08 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed()
	: _fixedPointNumberValue(0)
{
	std::cout << GREEN << "Default constructor called" << D << "\n";
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << YELL << "Copy constructor called" << D << "\n";
	*this = src;
}

Fixed::Fixed(const int n)
	: _fixedPointNumberValue(n << _fractionalBits)
{
	std::cout << GREEN << "Int constructor called" << D << "\n";
}

Fixed::Fixed(const float f)
	: _fixedPointNumberValue(roundf(f * (1 << _fractionalBits)))
{
	std::cout << GREEN << "Float constructor called" << D << "\n";
}

Fixed::~Fixed()
{
	std::cout << RED << "Destructor called" << D << "\n";
}

Fixed&	Fixed::operator=(const Fixed& src)
{
	std::cout << BLU << "Copy assignment operator called" << D << "\n";
	this->setRawBits(src.getRawBits());
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
	return (this->_fixedPointNumberValue >> _fractionalBits);
}

int		Fixed::toInt( void ) const
{
	return (this->_fixedPointNumberValue / _fractionalBits);
}

std::ostream& operator<<( std::ostream& outputStream, const Fixed& number )
{
	outputStream << number.toFloat();
	return (outputStream);
}