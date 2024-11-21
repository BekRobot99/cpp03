/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:54:36 by abekri            #+#    #+#             */
/*   Updated: 2024/11/21 02:54:34 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    energyPoints = 50;
    std::cout << "ScavTrap default constructor called.\n";
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    energyPoints = 50;
    std::cout << "ScavTrap " << name << " constructed.\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap " << name << " copied.\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap assignment operator called.\n";
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " destroyed.\n";
}

void ScavTrap::attack(const std::string& target) {
    std::cout << "ScavTrap " << name << " attacks " << target
              << " for " << attackDamage << " damage.\n";
}
