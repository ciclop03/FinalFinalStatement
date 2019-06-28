#include "databasemanagementsystem.h"

DataBaseManagementSystem::DataBaseManagementSystem()
{
    hashPlayer=new HashTable<string,Player>(120);
}
/// AQUI....
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
            int n = std::stoi(readline[4]);
            int u = std::stoi(readline[6]);
            int v = std::stoi(readline[7]);
            int x = std::stoi(readline[8]);
            int y = std::stoi(readline[9]);

            Player *p=new Player(readline[0],readline[1],readline[2],readline[3],n,readline[5],u,v,x,y);
        }
    }
    file.close();

}
