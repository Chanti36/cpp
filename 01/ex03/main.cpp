/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:32:34 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/26 10:25:00 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
//a
	Weapon weapon_a = Weapon("crude spiked club");
	HumanA human_a("antonio", weapon_a);
	human_a.attack();
	
	weapon_a.setType("some other type of club");
	human_a.attack();

//b
	Weapon weapon_b = Weapon("crude spiked club");
	HumanB human_b("basilio");
	human_b.attack();
	
	human_b.setWeapon(weapon_b);
	human_b.attack();
	
	weapon_b.setType("some other type of club");
	human_b.attack();
	
	return (0);
}
