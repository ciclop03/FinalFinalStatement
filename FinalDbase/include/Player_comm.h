

#ifndef PLAYERTATOR_H
#define PLAYERTATOR_H

#include <Player.h>
#include <Commentator.h>

class Playertator : public Player, public Commentator
{
    public:
        Playertator();
        ~Playertator();

    protected:

    private:
};

#endif // PLAYERTATOR_H

