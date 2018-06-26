//
// Created by Anastasia CHEPURNA on 26.06.2018.
//

#include "Base.hpp"

Base::Base(void){

}

Base::Base(Base const & src){
    *this = src;
}

Base::~Base(void){

}

Base & Base::operator=(Base const & rhs){
    (void)rhs;
    return *this;
}