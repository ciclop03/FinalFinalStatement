#ifndef PLAYER_H
#define PLAYER_H

#include <Person.h>


class Player : public Person
{
    public:
        Player(string nick, int wins, int looses, int cpt_points);
        virtual ~Player();

    protected:
        string nick;
        int wins, looses, top8s, cpt_points;

    private:
};

#endif // PLAYER_H
