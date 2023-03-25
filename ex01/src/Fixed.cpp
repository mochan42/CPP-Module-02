/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:40:20 by moninechan        #+#    #+#             */
/*   Updated: 2023/03/25 20:37:04 by mochan           ###   ########.fr       */
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
	_fixedPointNumberValue = n * (1 << _fractionalBits);
}

Fixed::Fixed(const float f)
{
	std::cout << GREEN << "Float constructor called" << D << "\n";
	int	fractional_part;
	Fixed::_fixedPointNumberValue = ((int) floor (f)) << Fixed::_fractionalBits; // calculate integer part of f and convert into fixed point
	
	if (f > 0)
		fractional_part = (f - (long) f) * 256; // calculate fractional part (f > 0) and transform into fixed point
	else if (f < 0)
		fractional_part = -(f - (long) f) * 256; // calculate fractional part (f < 0) and transform into fixed point
	else
		fractional_part = 0;
	if (fractional_part > 255)
		Fixed::_fixedPointNumberValue += 0;
	else
		Fixed::_fixedPointNumberValue += fractional_part;
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
