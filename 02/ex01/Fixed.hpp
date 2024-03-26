/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:19:58 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/26 10:46:38 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
	private:
		int value;
		static int const bits = 8;

	public:
		Fixed();
		Fixed(Fixed const &copy);
		Fixed(const int integer);
		Fixed(const float float_number);
		~Fixed();
		Fixed& operator=(const Fixed& other);

		float	toFloat() const;
		int		toInt() const;
		int		getRawBits() const;
		void	setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fi);
#endif