/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:54:09 by abekri            #+#    #+#             */
/*   Updated: 2024/11/21 02:55:44 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), FragTrap(), ScavTrap(), _name("Default") {
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap default constructor called.\n";
}

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name) {
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap:: energyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << name << " constructed.\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other.name) {
    std::cout << "DiamondTrap " << name << " copied.\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        name = other.name;
    }
    std::cout << "DiamondTrap assignment operator called.\n";
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " destroyed.\n";
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << name
              << ", ClapTrap name: " << ClapTrap::name << "\n";
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}
