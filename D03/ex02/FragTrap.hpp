/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:19:53 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/14 15:11:58 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
    public:
    FragTrap();
    FragTrap(const FragTrap &obj);
    FragTrap& operator=(const FragTrap &obj);
    FragTrap(const std::string& n);
    ~FragTrap();
    
    void  highFivesGuys(void);
};

#endif