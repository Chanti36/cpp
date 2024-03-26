/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:17:05 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/26 14:45:25 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_name = "default";
	std::cout << "Default FragTrap created!\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_name = name;
	std::cout << "FragTrap " << this->_name << " created!\n";
}

FragTrap::~FragTrap() 
{
	std::cout << "FragTrap " << this->_name << " destroyed!\n";
};

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " high five." << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
		return;
	if (this->_energyPoints <= 0)
	{
		std::cout << "FragTrap " << this->_name << " has no energy left!\n";
		return;
	}
	this->_energyPoints--;
	std::cout << "FragTrap " << this->_name << " attacks " << target <<", causing " << this->_attackDamage << " points of damage!\n";
}