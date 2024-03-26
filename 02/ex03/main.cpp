/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:16:55 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/26 12:32:42 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//utility function to calculate area of triangle formed by 3 points 
float area(Point p1, Point p2, Point p3)
{
   return abs( (p1.get_X().getRawBits() * (p2.get_Y().getRawBits() - p3.get_Y().getRawBits()) + \
   				p2.get_X().getRawBits() * (p3.get_Y().getRawBits() - p1.get_Y().getRawBits()) + \
				p3.get_X().getRawBits() * (p1.get_Y().getRawBits() - p2.get_Y().getRawBits())) \
				/ 2.0);
}

void check_triangle(Point p, Point a, Point b, Point c)
{
	// Calculate total area
	float A = area (a, b, c);  

	// Calculate areas of the 3 sub triangles
	float A1 = area (p, b, c);  
	float A2 = area (a, p, c);  
	float A3 = area (a, b, p);

	// Check if sum of sub areas is the same as the triangle
	if (A == A1 + A2 + A3)
		std::cout << "POINT IS INSIDE" <<std::endl;
	else
		std::cout << "POINT IS OUTSIDE" <<std::endl;
}

int main()
{
	Point p(0, 0);
	Point tp1(-1, -1);
	Point tp2(1, -1);
	Point tp3(0, 1);

	check_triangle(p, tp1, tp2, tp3);

    return (0);
}
