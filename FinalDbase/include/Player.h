#ifndef PLAYER_H
#define PLAYER_H

#include <Person.h>
using namespace std;

class Player : public Person
{
    public:
        Player(string name, string lastname, string country, char gender, int age,
               string nick, int wins, int looses,int top8s, int cpt_points);
        //:Person(name,lastname,country, gender,age){};
        virtual ~Player();

    protected:
        string nick;
        int wins, looses, top8s, cpt_points;

    private:
};

#endif // PLAYER_H
