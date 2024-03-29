#include "character.h"
#include <iostream>
Character::Character()
{

}

Character::Character(std::string name, std::string lastname, std::string country, std::string gender, int age,
                  /**int idcharacter,*/int damage, int hit_points, int defense_option,
                  int resistant, int attack_range, int projectile):Person(name, lastname, country, gender, age)
{
    this->damage=damage;
    this->hit_points=hit_points;
    this->defense_option=defense_option;
    this->resistant=resistant;
    this->attack_range=attack_range;
    this->projectile=projectile;

}

Character::~Character()
{

}

void Character::showdata()
{

    std::cout<<"Character.\n Name: "<<this->name
              <<"Damage (1-10): "<<this->damage
              <<"hit points (aka health) (1-10): "<<this->hit_points
              <<"Defensive rating (1- easy to dive, 10- a turtle)"
              <<this->defense_option<<"\n"
              <<"stunt bar (1- bar fills fast, 10- bar takes ages to fill up: "
              <<this->resistant<<"\n"
              <<"Attack range(1-10) : " << this->attack_range
              <<"Projectile effectiveness (0- no projectiles, 10 a spammer) :"
              <<this->projectile<<"\n";

}

int Character::overallTier()
{
    int a=0;
    a+=this->damage;
    a+=this->hit_points ;
    a+= this->defense_option;
    a+=this->resistant;
    a+= this->attack_range;
    a += this->projectile;
    if (this->projectile ==0)
        return (a / 5)-5;
    return a/6;
}
