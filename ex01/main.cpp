/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:39:06 by abekri            #+#    #+#             */
/*   Updated: 2024/11/15 20:39:07 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "Creating ScavTraps\n";
    ScavTrap basic_scav;
    ScavTrap mike("Mike");
    ScavTrap copy_mike(mike);

    std::cout << "\n--- Testing ScavTrap Functions ---" << std::endl;
    std::cout << "Mike has " << mike.hitPoints << " hit points and " << mike.energyPoints << " energy points." << std::endl;
    mike.attack("a rogue robot");
    mike.takeDamage(15);
    std::cout << "Mike now has " << mike.hitPoints << " hit points and " << mike.energyPoints << " energy points.\n";

    mike.guardGate();
    std::cout << "\n--- Testing Copy Constructor and Assignment ---" << std::endl;
    ScavTrap clone_mike = mike;
    std::cout << "Clone Mike after copying has " << clone_mike.hitPoints << " hit points and " << clone_mike.energyPoints << " energy points.\n";

    return 0;
}
