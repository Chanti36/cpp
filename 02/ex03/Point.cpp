/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:17:44 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/26 11:41:22 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{

}

Point::Point(const float x, const float y) : _x(x) , _y(y)
{

}

Point::Point(Point const &copy) : _x(copy._x), _y(copy._y)
{

}

Point::~Point()
{
	
}

Point&	Point::operator=(const Point& other)
{
	(Fixed)this->_x = other.get_X();
	(Fixed)this->_y = other.get_Y();
	return (*this);
}

Fixed Point::get_X(void) const
{
	return (this->_x);
}

Fixed Point::get_Y(void) const
{
	return (this->_y);
}
