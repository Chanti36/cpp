/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:17:05 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/26 13:49:44 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_name = "default";
	std::cout << "Default ScavTrap created!\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_name = name;
	std::cout << "ScavTrap " << this->_name << " created!\n";
}

ScavTrap::~ScavTrap() 
{
	std::cout << "ScavTrap " << this->_name << " destroyed!\n";
};

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " guards the gate!\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
		return;
	if (this->_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy left!\n";
		return;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target <<", causing " << this->_attackDamage << " points of damage!\n";
}