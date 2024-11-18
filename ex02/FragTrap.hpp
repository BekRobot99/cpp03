/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:39:42 by abekri            #+#    #+#             */
/*   Updated: 2024/11/17 13:37:43 by abekri           ###   ########.fr       */
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
