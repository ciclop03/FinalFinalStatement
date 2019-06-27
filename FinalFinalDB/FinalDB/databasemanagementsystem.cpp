#include "databasemanagementsystem.h"

DataBaseManagementSystem::DataBaseManagementSystem()
{
    hashPlayer=new HashTable<string,Player>(120);
}

void DataBaseManagementSystem::loadPlayerIntoHash()
{
    string line;
    ifstream file;
    file.open("Player.txt");
    vector<string> readline;
    if(file.is_open())
    {
        while (getline(file,line)) {
            readline=split(line,',');
            //convertir atr a int
            Player *p=new Player(readline[0],readline[1],readline[2],readline[3],readline[4],readline[5]);
        }
    }
    file.close();

}
