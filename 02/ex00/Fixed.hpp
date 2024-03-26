/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:19:58 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/26 10:30:46 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
	private:
		int					value;
		static int const	bits = 8;

	public:
		Fixed();
		Fixed(Fixed &copy);
		~Fixed();
		Fixed& operator=(const Fixed& other);

		int getRawBits() const;
		void setRawBits( int const raw );
};
#endif