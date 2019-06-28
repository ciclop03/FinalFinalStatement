#include "player.h"
#include <iostream>
Player::Player()
{

}

Player::Player(std::string name, std::string lastname, std::string country, std::string gender, int age,
               std::string nick, int wins, int looses,int top8s, int cpt_points)
               :Person(name, lastname, country, gender, age){
  this->nick = nick;
  this->wins=wins;
  this->looses=looses;
  this->cpt_points=cpt_points;

}

void Player::showdata()
{
    std::cout<< "Player: "<< this->name<< " \""<< this->nick<<"\" "<<this->lastname<<"."
        <<"\nTournament Points (CPT Points): "<<this->cpt_points<<"."
        <<"\n"<<this->nick<<" has top eight "<<this->top8s<<" times.\n"
        <<"Total wins (smash.gg) : "<<this->wins<< " out of "<<(this->looses/2 )+ this->wins<<" tournaments."
        <<"(approximately "<<this->looses+(this->wins/2)<<" looses)\n";
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
