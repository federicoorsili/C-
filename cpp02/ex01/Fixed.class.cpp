/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 11:35:05 by forsili           #+#    #+#             */
/*   Updated: 2021/04/27 15:08:28 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default costructor called" << std::endl;
	this->fixed_poit_value = 0;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_poit_value = copy.getRawBits();
}

Fixed::Fixed(int const input)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_poit_value = input << this->fractional_bits;
}

Fixed::Fixed(float const input)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_poit_value = (round((input) * (1 << this->fractional_bits)));
}

Fixed& Fixed::operator = (Fixed const &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_poit_value = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Distructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called" << std::endl;
	return (this->fixed_poit_value);
}

void	Fixed::setRawBits(int const n)
{
	std::cout << "setRawBits called" << std::endl;
	this->fixed_poit_value = n;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->fixed_poit_value) / (float)(1 << this->fractional_bits));
}

int		Fixed::toInt(void) const
{
	float	tmp;

	tmp = ((float)(this->fixed_poit_value) / (float)(1 << this->fractional_bits));
	return ((int)tmp);
}


std::ostream& operator<<(std::ostream& out, const Fixed& f)
{
	return out << f.toFloat();
}
