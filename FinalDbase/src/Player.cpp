#include "Player.h"

Player::Player(string name, string lastname, string country, int age,
               string nick, int wins, int looses, int cpt_points)
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
