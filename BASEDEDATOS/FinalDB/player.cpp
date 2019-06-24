#include "Player.h"
#include <iostream>
Player::Player(std::string name, std::string lastname, std::string country, char gender, int age,
               std::string nick, int wins, int looses,int top8s, int cpt_points)
               :Person(name, lastname, country, gender, age){
  this->nick = nick;
  this->wins=wins;
  this->looses=looses;
  this->cpt_points=cpt_points;

}



Player::~Player()
{
    //dtor
}

std::string Player::getNick() const
{
    return nick;
}

void Player::setNick(const std::string &value)
{
    nick = value;
}
