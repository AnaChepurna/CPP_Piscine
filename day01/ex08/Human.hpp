//
// Created by Anastasia CHEPURNA on 20.06.2018.
//

#ifndef HUMAN_HPP
#define HUMAN_HPP


#include <iostream>
#include <map>

class Human {
private:
    void meleeAttack(std::string const & target);
    void rangedAttack(std::string const & target);
    void intimidatingShout(std::string const & target);
public:
    void action(std::string const & action_name, std::string const & target);
};


#endif
