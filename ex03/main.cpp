/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:54:27 by abekri            #+#    #+#             */
/*   Updated: 2024/11/21 02:34:04 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    DiamondTrap dt1("Diamond1");
    DiamondTrap dt2("Diamond2");

    dt2 = dt1;
    DiamondTrap dt3(dt1);

    dt1.whoAmI();
    dt3.whoAmI();

    return 0;
}
