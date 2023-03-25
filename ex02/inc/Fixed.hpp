/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:40:25 by moninechan        #+#    #+#             */
/*   Updated: 2023/03/25 23:54:14 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class	Fixed
{
	public:
		// CONSTRUCTORS
		Fixed(); // Default constructor
		Fixed(const Fixed& src); // Default copy constructor
		Fixed(const int n);
		Fixed(const float f);

		// DESTRUCTOR
		~Fixed();

		// OPERATOR OVERLOADS
		Fixed&	operator=(const Fixed& src); // Copy assignment operator called
		bool	operator>(const Fixed& src);
		bool	operator<(const Fixed& src);
		bool	operator>=(Fixed const & src);
		bool	operator<=(Fixed const & src);
		bool	operator==(Fixed const & src);
		bool	operator!=(Fixed const & src);
		Fixed	operator+(Fixed const & src);
		Fixed	operator-(Fixed const & src);
		Fixed	operator*(Fixed const & src);
		Fixed	operator/(Fixed const & src);
		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);
		static Fixed &	min(Fixed & ref1, Fixed & ref2);
		static const Fixed &	min(Fixed const & ref1, Fixed const & ref2);
		static Fixed &	max(Fixed & ref1, Fixed & ref2);
		static const Fixed &	max(Fixed const & ref1, Fixed const & ref2);

		// GETTER / SETTER
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		// MEMBER FUNCTIONS
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
		int					_fixedPointNumberValue;
		static const int	_fractionalBits = 8;
};

std::ostream& operator<<( std::ostream& outputStream, const Fixed& number );

#endif