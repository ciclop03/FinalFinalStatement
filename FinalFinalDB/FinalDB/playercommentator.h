#ifndef PLAYERTATOR_H
#define PLAYERTATOR_H
#include "person.h"
#include <player.h>
#include <commentator.h>

class PlayerCommentator : public T, public Commentator
{
    public:
        PlayerCommentator(std::string name, std::string lastname, std::string country, std::string gender, int age,
                          std::string nick, int wins, int looses,int top8s, int cpt_points, int votes);
        ~PlayerCommentator();

    protected:

    private:
        int votes;

};

#endif // PLAYERTATOR_H

