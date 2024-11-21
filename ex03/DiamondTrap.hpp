/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:54:14 by abekri            #+#    #+#             */
/*   Updated: 2024/11/21 02:55:28 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
    std::string _name;

public:
    DiamondTrap();                              
    DiamondTrap(const std::string& name);         
    DiamondTrap(const DiamondTrap& other);        
    DiamondTrap& operator=(const DiamondTrap& other);
    ~DiamondTrap();                          

    void whoAmI();
    void attack(const std::string& target);
};

#endif 
