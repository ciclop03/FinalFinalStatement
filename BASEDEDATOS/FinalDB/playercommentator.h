#ifndef PLAYERTATOR_H
#define PLAYERTATOR_H
#include "person.h"
#include <Player.h>
#include <Commentator.h>

class PlayerCommentator : public Player, public Commentator
{
    public:
        PlayerCommentator(std::string name, std::string lastname, std::string country, char gender, int age,
                          std::string nick, int wins, int looses,int top8s, int cpt_points, int votes);
        ~PlayerCommentator();

    protected:

    private:
        int votes;

};

#endif // PLAYERTATOR_H

