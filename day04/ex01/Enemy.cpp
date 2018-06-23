//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include "Enemy.hpp"

Enemy::Enemy():hit_points(0),  type("") {
}

Enemy::Enemy(int hp, std::string const &type):
hit_points(hp), type(type) {
}

Enemy::Enemy(Enemy const &src) {
    *this = src;
}

Enemy::~Enemy() {
}

Enemy &Enemy::operator=(Enemy const &src) {
    this->hit_points = src.hit_points;
    this->type = src.type;
    return (*this);
}

std::string const Enemy::getType() const {
    return (type);
}

int Enemy::getHP() const {
    return (hit_points);
}

void Enemy::takeDamage(int damage) {
    if (hit_points > 0)
        hit_points -= damage;
    if (hit_points < 0)
        hit_points = 0;
}






