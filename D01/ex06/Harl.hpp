/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:40:41 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/02 17:44:18 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP


#include <iostream>

class Harl{
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    public:
    Harl();
    void complain( std::string level );
    ~Harl();
};

#endif