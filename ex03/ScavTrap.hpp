/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:54:40 by abekri            #+#    #+#             */
/*   Updated: 2024/11/21 02:49:32 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    
    ScavTrap();                                  
    ScavTrap(const std::string& name);          
    ScavTrap(const ScavTrap& other);            
    ScavTrap& operator=(const ScavTrap& other); 
    virtual ~ScavTrap();                       

    void attack(const std::string& target);
};

#endif 
