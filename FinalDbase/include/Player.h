#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <Person.h>


class Player : public Person
{
    public:
        Player(std::string name, std::string lastname, std::string country, char gender, int age,
               std::string nick, int wins, int looses,int top8s, int cpt_points);
        //:Person(name,lastname,country, gender,age){};
        virtual ~Player();

    protected:
        std::string nick;
        int wins, looses, top8s, cpt_points;

    private:
};

#endif // PLAYER_H
