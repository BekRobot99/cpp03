/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:38:55 by abekri            #+#    #+#             */
/*   Updated: 2024/11/15 20:38:56 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : name("ClapDef"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap default constructor called.\n";
}

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " has been created.\n";
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
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


void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy_pts > 0 && this->_hit_pts > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage!" << std::endl;
		this->_energy_pts--;
	}
	else if (this->_energy_pts == 0)
		std::cout << "\033[31mClapTrap " << this->_name << " is not able to attack " << target << ", because he has no energy points left.\033[0m" << std::endl;
	else
		std::cout << "\033[31mClapTrap " << this->_name << " is not able to attack " << target << ", because he has not enough hit points.\033[0m" << std::endl;
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
