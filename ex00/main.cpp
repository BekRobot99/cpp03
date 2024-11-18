/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:38:38 by abekri            #+#    #+#             */
/*   Updated: 2024/11/15 15:09:09 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    std::cout << "Demonstrating ClapTrap Constructors" << std::endl;

    ClapTrap anonymous_clap; // Default constructor
    ClapTrap john("John");
    ClapTrap clone_john(john);  // Copy constructor
    ClapTrap alex("Alex");

    std::cout << "\n--- Testing ClapTrap Functions ---" << std::endl;
    std::cout << "John has " << john.hitPoints << " hit points and " << john.energyPoints << " energy points." << std::endl;
    john.attack("a wild boar");
    john.takeDamage(3);
    std::cout << "John now has " << john.hitPoints << " hit points and " << john.energyPoints << " energy points.\n";

    std::cout << "\n--- Testing Edge Cases ---" << std::endl;
    std::cout << "Alex has " << alex.hitPoints << " hit points and " << alex.energyPoints << " energy points." << std::endl;
    alex.takeDamage(12);
    alex.attack("a tree");
    alex.beRepaired(5);
	alex.takeDamage(5);
    std::cout << "Alex has " << alex.hitPoints << " hit points and " << alex.energyPoints << " energy points left.\n";

    std::cout << "\n--- Testing Copy Constructor and Assignment Operator ---" << std::endl;
    std::cout << "Clone of John has " << clone_john.hitPoints << " hit points and " << clone_john.energyPoints << " energy points." << std::endl;
    clone_john = alex;
    std::cout << "Clone of John after assignment has " << clone_john.hitPoints << " hit points and " << clone_john.energyPoints << " energy points.\n";

    std::cout << "\n--- Destructor Demonstration ---" << std::endl;

    return 0;
}
