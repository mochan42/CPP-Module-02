/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:40:25 by moninechan        #+#    #+#             */
/*   Updated: 2023/03/26 10:26:23 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cstring>

class	Fixed
{
	public:
		Fixed(); // Default constructor
		Fixed(const Fixed& other); // Copy constructor
		~Fixed(); // Destructor
		Fixed&	operator=(const Fixed& src); // Copy assignment operator called
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int					_fixedPointNumberValue;
		static const int	_fractionalBits = 8;
};

#endif