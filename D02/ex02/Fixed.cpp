/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 20:35:10 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/13 14:25:11 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():fpn_val(0){}

Fixed::Fixed(const int x){
    fpn_val = (x << fract_bits);
}

Fixed::Fixed(const float x){
    fpn_val = roundf(x * (1 << fract_bits));
}

Fixed::Fixed(const Fixed& newobj){
    *this = newobj;
}

Fixed& Fixed::operator=(const Fixed& newobj){
    if (&newobj != this)
        fpn_val = newobj.getRawBits();
    return( *this);
}
Fixed::~Fixed(){}

int Fixed::getRawBits( void ) const{
    return (fpn_val);
}
void Fixed::setRawBits( int const raw ){
    fpn_val = raw;
}

float Fixed::toFloat( void ) const{
    return((float)fpn_val / (1 << fract_bits));
}

int Fixed::toInt( void ) const{
    return(fpn_val >> fract_bits)  ;
}

std::ostream &operator <<(std::ostream &output, const Fixed &fix_obj)
{
    output << fix_obj.toFloat();
    return (output);
}

bool Fixed::operator>(const Fixed& y)const{
    return (fpn_val > y.getRawBits());
}

bool Fixed::operator<(const Fixed& y)const{
    return (fpn_val < y.getRawBits());
}

bool Fixed::operator>=(const Fixed& y)const{
    return (fpn_val >= y.getRawBits());
}

bool Fixed::operator<=(const Fixed& y)const{
    return (fpn_val <= y.getRawBits());
}

bool Fixed::operator==(const Fixed& y)const{
    return (fpn_val == y.getRawBits());
}

bool Fixed::operator!=(const Fixed& y)const{
    return (fpn_val != y.getRawBits());
}

Fixed Fixed::operator+(const Fixed& y)const{
    Fixed f(fpn_val + y.getRawBits());
    return (f);
}

Fixed Fixed::operator-(const Fixed& y)const{
    Fixed f(fpn_val - y.getRawBits());
    return (f);
}

Fixed Fixed::operator/(const Fixed& y)const{
    Fixed f(toFloat() / y.toFloat());
    return (f);
}

Fixed Fixed::operator*(const Fixed& y)const{
    Fixed f(toFloat() * y.toFloat());
    return (f);
}

Fixed Fixed::operator++(int){
    Fixed f(*this) ;
    return(fpn_val++, f);
}

Fixed &Fixed::operator++(){
    return(fpn_val++, *this);
}

Fixed Fixed::operator--(int){
    Fixed f(*this);
    return(fpn_val--, f);
}

Fixed &Fixed::operator--(){
    return(fpn_val--, *this);
}

Fixed& Fixed::min(Fixed& x, Fixed& y){
    return ((x < y)? x : y);
}

Fixed& Fixed::max(Fixed& x, Fixed& y){
    return ((x > y) ? x : y);
}

const Fixed& Fixed::min(const Fixed& x, const Fixed& y){
    return ((x < y) ? x : y);
}

const Fixed& Fixed::max(const Fixed& x, const Fixed& y){
    return ((x > y) ? x : y);
}
