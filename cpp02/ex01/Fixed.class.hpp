/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 11:28:04 by forsili           #+#    #+#             */
/*   Updated: 2021/04/27 12:54:24 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Fixed {

	private:

		int					fixed_poit_value;
		int	static const	fractional_bits = 8;

	public:

		Fixed(void);
		Fixed(Fixed const &copy);
		Fixed(int const input);
		Fixed(float const input);
		Fixed& operator = (Fixed const &copy);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const n);
		float	toFloat(void) const;
		int		toInt(void) const;

};

std::ostream& operator<<(std::ostream& out, const Fixed& f);