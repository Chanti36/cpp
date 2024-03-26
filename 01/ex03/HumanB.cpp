/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:24:41 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/22 10:47:54 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
	
}

void HumanB::attack()
{
	if (this->_weapon)
		std::cout << this->_name << " attack with " << this->getWeapon().getType() << "\n";
	else
		std::cout << this->_name << " doesn't have a weapon to attack" << std::endl;
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	this->_weapon = &new_weapon;
}

Weapon HumanB::getWeapon()
{
	return *this->_weapon;
}