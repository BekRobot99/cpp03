/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:52:45 by abekri            #+#    #+#             */
/*   Updated: 2024/11/21 02:56:02 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : name("Default"), hitPoints(100), energyPoints(50), attackDamage(20) {
    std::cout << "ClapTrap default constructor called.\n";
}

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hitPoints(100), energyPoints(50), attackDamage(20) {
    std::cout << "ClapTrap " << name << " constructed.\n";
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    *this = other;
    std::cout << "ClapTrap " << name << " copied.\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap assignment operator called.\n";
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " destroyed.\n";
}

void ClapTrap::attack(const std::string& target) {
    std::cout << "ClapTrap " << name << " attacks " << target
              << " for " << attackDamage << " damage.\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
    hitPoints = (hitPoints > amount) ? hitPoints - amount : 0;
    std::cout << name << " took " << amount << " damage, "
              << hitPoints << " HP left.\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
    hitPoints += amount;
    std::cout << name << " repaired " << amount << ", "
              << hitPoints << " HP now.\n";
}
