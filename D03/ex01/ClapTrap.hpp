/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:50:42 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/14 15:10:59 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
    protected:
        std::string name;
        unsigned int hitPoints;
        int energy;
        int damage;
    public:
    ClapTrap();
    ClapTrap(const ClapTrap &obj);
    ClapTrap& operator=(const ClapTrap &obj);
    ClapTrap(const std::string& n);
    ~ClapTrap();
    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
    const std::string& getName()const;
};

#endif