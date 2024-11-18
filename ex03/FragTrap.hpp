/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:54:23 by abekri            #+#    #+#             */
/*   Updated: 2024/11/17 16:24:20 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap &copy);

    ~FragTrap();

    FragTrap &operator=(const FragTrap &other);

    void highFivesGuys(void);
};

#endif
