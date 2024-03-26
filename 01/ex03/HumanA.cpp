/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:32:26 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/22 10:26:04 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &new_weapon) : _weapon(new_weapon)
{
	this->_name = name;
}

HumanA::~HumanA()
{
	
}

void HumanA::attack()
{
	std::cout << this->_name << " attack with "<< this->getWeapon().getType() <<"\n";
}

Weapon HumanA::getWeapon()
{
	return this->_weapon;
}