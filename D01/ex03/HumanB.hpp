/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:41:14 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/08 11:41:46 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP


#include "Weapon.hpp"

class HumanB{
    private:
    std::string name;
    Weapon* weapon;
    public:
    HumanB(const std::string& playerName);
    void setWeapon(Weapon& wp);
    void attack() const;
    ~HumanB();
};

#endif