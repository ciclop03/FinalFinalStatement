#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "person.h"
using namespace std;
class Player : public Person
{
    friend class PersonDynArray;
    public:
       Player();
       Player(std::string name, std::string lastname, std::string country, std::string gender, int age,
               std::string nick, int wins, int looses,int top8s, int cpt_points);
        //:Person(name,lastname,country, gender,age){};
        void talk()
        {
            cout <<"i am player"<< endl;
        }
        void showdata();
        virtual ~Player();
        std::string getNick() const;
        void setNick(const std::string &value);

    protected:
        std::string nick;
        int wins, looses, top8s, cpt_points;

    private:
};

#endif // PLAYER_H
