#include "character.h"
Character::Character(std::string name, std::string lastname, std::string country, std::string gender, int age,
                  /**int idcharacter,*/int damage, int hit_points, int defense_option,
                  int resistant, int attack_range, int projectile):Person(name, lastname, country, gender, age)
{
    this->damage=damage;
    this->hit_points=hit_points;
    this->defense_option=defense_option;
    this->resistant=resistant;
    this->attack_range=attack_range;

}

Character::~Character()
{

}

void Character::showdata()
{
    std::cout<<"Character.\n Name: "<<this->name
              <<"Damage (1-10)"<<this-damage
              <<"Attack range(1-10) : " << this->attack_range
              <<" ";
}
