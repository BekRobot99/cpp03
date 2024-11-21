/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:54:19 by abekri            #+#    #+#             */
/*   Updated: 2024/11/21 02:55:01 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    hitPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap default constructor called.\n";
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    hitPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " constructed.\n";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap " << name << " copied.\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap assignment operator called.\n";
    return *this;
}


FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " destroyed.\n";
}
