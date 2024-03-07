/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 20:35:07 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/12 19:16:09 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    private:
        int fpn_val;
        static const int fract_bits = 8;
    public:
        Fixed();
        Fixed(const int x);
        Fixed(const float x);
        Fixed(const Fixed& newobj);
        Fixed& operator=(const Fixed& newobj);
        ~Fixed();
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
        
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator <<(std::ostream &output, const Fixed &obj);
#endif