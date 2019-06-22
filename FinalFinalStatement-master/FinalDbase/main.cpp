#include <iostream>
#include <fstream>
#include <stdlib.h>

#include <Player.h>
#include <Character.h>
#include <Commentator.h>
#include <DynArray.h>

using namespace std;

int main()
{
    ofstream players;
    ofstream characters;
    ofstream commentators;

    Player ply_001("victor","woodley","USA",'m',20,"punk",(14*2)+(10*2), 6, 6, 2655);

    Character cha_005("karin","kanzuki","japan",'f',18,8,7,6,6,7,0);

    Commentator com_001 ("james","chen","USA",'m',36,0);



    return 0;
}
