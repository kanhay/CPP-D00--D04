/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 20:35:07 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/12 13:18:04 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int fpn_val;
        static const int fract_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed& newobj);
        Fixed& operator=(const Fixed& newobj);
        ~Fixed();
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif