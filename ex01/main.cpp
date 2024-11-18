/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:39:06 by abekri            #+#    #+#             */
/*   Updated: 2024/11/17 14:25:07 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    {
        std::cout << "Demonstrating ClapTrap Constructors" << std::endl;

    ClapTrap anonymous_clap;
    ClapTrap john("John");
    ClapTrap clone_john(john);
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
    }

    {
     std::cout << "Creating ScavTraps\n";
    ScavTrap basic_scav;
    ScavTrap mike("Mike");
    ScavTrap copy_mike(mike);

    std::cout << "\n--- Testing ScavTrap Functions ---" << std::endl;
    mike.guardGate();
    mike.attack("a car");
    std::cout << "Mike has " << mike.hitPoints << " hit points and " << mike.energyPoints << " energy points." << std::endl;
    std::cout << "\n--- Testing Copy Constructor and Assignment ---" << std::endl;
    std::cout << "Copy_Mike " << copy_mike.name << " has " << copy_mike.hitPoints << " hit points and " 
              << copy_mike.energyPoints << " energy points."<< std::endl;

    std::cout << "\nTests for ScavTrap Copy Assignment Operator"  << std::endl;
    mike.attack("a tree");
    std::cout << "After attack: " << mike.name << " has " << mike.hitPoints << " hit points and " 
              << mike.energyPoints << " energy points.\n";
    ScavTrap third_scav("ThirdScav");
    std::cout << "Initial state of ThirdScav: " << third_scav.name << " has " << third_scav.hitPoints 
              << " hit points and " << third_scav.energyPoints << " energy points.\n";
    third_scav = mike;
    std::cout << "After assignment: " << third_scav.name << " has " << third_scav.hitPoints << " hit points and " 
              << third_scav.energyPoints << " energy points.\n";
    std::cout <<  "\nAdditional ScavTrap Function Tests" <<  std::endl;
    mike.takeDamage(7);
    std::cout << "After taking damage: " << mike.name << " has " << mike.hitPoints << " hit points left.\n";
    mike.beRepaired(5);
    std::cout << "After repair: " << mike.name << " has " << mike.hitPoints << " hit points and " 
              << mike.energyPoints << " energy points.\n";
    std::cout <<  "\nDestructor Calling Demonstration" <<  std::endl;
    }
    return 0;
}

