/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:38:24 by abekri            #+#    #+#             */
/*   Updated: 2024/11/16 14:44:55 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap()
    : name("ClapDef"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap default constructor called.\n";
}

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " has been created.\n";
}

ClapTrap::ClapTrap(const ClapTrap &copy)
    : name(copy.name), hitPoints(copy.hitPoints),
      energyPoints(copy.energyPoints), attackDamage(copy.attackDamage) {
    std::cout << "ClapTrap copy constructor called for " << name << ".\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap) {
    if (this != &clapTrap) {
        name = clapTrap.name;
        hitPoints = clapTrap.hitPoints;
        energyPoints = clapTrap.energyPoints;
        attackDamage = clapTrap.attackDamage;
        std::cout << "ClapTrap copy assignment operator called.\n";
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " has been destroyed.\n";
}

void ClapTrap::attack(const std::string& target) {
    if (hitPoints > 0 && energyPoints > 0) {
        std::cout << "ClapTrap " << name << " attacks " << target
                  << ", causing " << attackDamage << " points of damage!\n";
        energyPoints--;
    }
	else if (hit_points == 0)
	{
		std::cout << name << " is already dead and can not attack someone." << std::endl;
	}
	else {
        std::cout << "ClapTrap " << name << " cannot attack. Insufficient hit points or energy.\n";
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hit_points == 0 && amount != 0)
		std::cout << name << " is already dead and can not be more demaged" << ".\n";
    else if (hitPoints > 0) {
        hitPoints -= amount;
        if (hitPoints < 0) hitPoints = 0;
        std::cout << "ClapTrap " << name << " takes " << amount
                  << " points of damage. Current hit points: " << hitPoints << ".\n";
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hit_points == 0)
		std::cout << name << " is already dead and can not be rapaired" << ".\n";
    else if (hitPoints > 0 && energyPoints > 0) {
        hitPoints += amount;
        energyPoints--;
        std::cout << "ClapTrap " << name << " repairs itself for " << amount
                  << " points. Current hit points: " << hitPoints << ".\n";
    } else {
        std::cout << "ClapTrap " << name << " cannot repair. Insufficient hit points or energy.\n";
    }
}
