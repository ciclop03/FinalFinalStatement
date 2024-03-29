#ifndef CHARACTER_H
#define CHARACTER_H

#include <Person.h>


class Character : public Person
{
    public:
        ///los valores propios del personaje son 11 posibles del 1 al 10
        Character(std::string name, std::string lastname, std::string country, char gender, int age,
                  /**int idcharacter,*/int damage, int hit_points, int defense_option,
                  int resistant, int attack_range, int projectile);
        ~Character();

    protected:
        ///int idcharacter;
        int damage, hit_points, defense_option, resistant, attack_range, prohectile;

    private:
};

#endif // CHARACTER_H
