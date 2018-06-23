//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef ENEMY_HPP
#define ENEMY_HPP


#include <iostream>

class Enemy {
protected:
    int hit_points;
    std::string type;

    Enemy();
public:

    Enemy(int hp, std::string const & type);
    Enemy(Enemy const & src);
    virtual ~Enemy();
    Enemy &  operator=(Enemy const & src);
    std::string const getType() const;
    int getHP() const;
    virtual void takeDamage(int);
};


#endif
