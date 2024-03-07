/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:27:40 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/02 17:31:41 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{
private:
    std::string type;
public:
    Weapon();
    Weapon(const std::string& wtype);
    const std::string& getType() const;
    void setType(const std::string& newtype);
    ~Weapon();
};

#endif