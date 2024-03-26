/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:19:47 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/26 10:46:25 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float float_number)
{
    std::cout << "Float contructer called" << std::endl;
    this->value = roundf(float_number * pow(2, this->bits));
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = integer * static_cast<int>(pow(2, this->bits));
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}



//_________________________________________________________________

float Fixed::toFloat( void ) const
{
    return (this->value / pow(2, this->bits));
}

int Fixed::toInt( void ) const
{
    return (this->value / static_cast<int>(pow(2, this->bits)));
}

Fixed& Fixed::operator=(const Fixed &other) {
 std::cout << "Copy assignment operator called" << std::endl;
 this->value = other.getRawBits();
 return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits( int const raw )
{
    this->value  =  raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fi)
{
    os << fi.toFloat();
    return os;
}