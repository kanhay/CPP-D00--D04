/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 20:35:07 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/12 19:17:58 by khanhayf         ###   ########.fr       */
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
        
        bool operator>(const Fixed& y)const ;
        bool operator<(const Fixed& y)const ;
        bool operator>=(const Fixed& y)const ;
        bool operator<=(const Fixed& y)const ;
        bool operator==(const Fixed& y)const ;
        bool operator!=(const Fixed& y)const ;
        Fixed operator+(const Fixed& y)const ;
        Fixed operator-(const Fixed& y)const ;
        Fixed operator/(const Fixed& y)const ;
        Fixed operator*(const Fixed& y)const ;
    
        Fixed operator++(int);
        Fixed &operator++();
        Fixed operator--(int);
        Fixed &operator--();
        
        static Fixed& min(Fixed& x, Fixed& y);
        static Fixed& max(Fixed& x, Fixed& y);
        static const Fixed& min(const Fixed& x, const Fixed& y);
        static const Fixed& max(const Fixed& x, const Fixed& y);
};

std::ostream &operator <<(std::ostream &output, const Fixed &obj);

#endif