/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:32:17 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/08 11:42:13 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP


#include "Weapon.hpp"

class HumanA{
private:
    std::string name;
    Weapon& weapon;
public:
    HumanA(const std::string& playerName, Weapon& wp);
    void attack() const;
    ~HumanA();
};

#endif
