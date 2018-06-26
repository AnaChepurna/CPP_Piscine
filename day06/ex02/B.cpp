//
// Created by Anastasia CHEPURNA on 26.06.2018.
//

#include "B.hpp"

B::B(void){

}

B::B(B const & src){
    *this = src;
}

B::~B(void){

}

B & B::operator=(B const & rhs){
    (void)rhs;
    return *this;
}