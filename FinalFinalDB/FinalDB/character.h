#ifndef CHARACTER_H
#define CHARACTER_H

#include "person.h"


class Character : public Person
{
    public:
        ///los valores propios del personaje son 11 posibles del 1 al 10
        Character ();
        Character(std::string name, std::string lastname, std::string country, std::string gender, int age,
                  /**int idcharacter,*/int damage, int hit_points, int defense_option,
                  int resistant, int attack_range, int projectile);
        ~Character();

        void showdata();

    protected:
        ///int idcharacter;
        int damage, hit_points, defense_option, resistant, attack_range, projectile;

    private:
};

#endif // CHARACTER_H
