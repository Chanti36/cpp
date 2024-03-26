/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:38:14 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/26 13:49:57 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
 
ClapTrap::ClapTrap()
{
	this->_name = "default";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "Default ClapTrap created!\n";
}
ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap " << this->_name << " created!\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destroyed!\n";
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
		return;
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy left!\n";
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target <<", causing " << this->_attackDamage << " points of damage!\n";
	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " already died!\n";	
		return ;
	}
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " took " << amount <<" damage!\n";
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " died!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		return;
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy left!\n";
		return;
	}
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " repaired itself " << amount << " points of health!\n";
}
