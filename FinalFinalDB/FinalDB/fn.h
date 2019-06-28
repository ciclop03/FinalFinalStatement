#ifndef FN_H
#define FN_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "player.h"
#include "character.h"
#include "commentator.h"
/**
ostream& operator<<(ostream & o, Player& p){
    return o<<p.getNick();
}
**/
/*
vector<string> splitter(string str,char separator){



    vector<string> splitVector;
    string ss;
    for (size_t i=0;i< str.length();i++) {
        if(str[i]!=separator)
            ss+=str[i];
        if(str[i]==separator or i==str.length()-1)
        {
            splitVector.push_back(ss);
            ss=' ';
        }
    }
    return splitVector;
}


void loadPlayerIntoArray(){



    string line;
    ifstream file;
    file.open("Player.txt");
    vector<string> readline;
    if(file.is_open())
    {
        while (getline(file,line)) {
            readline=splitter(line,',');
            //convertir atr a int
            int n = std::stoi(readline[4]);
            int u = std::stoi(readline[6]);
            int v = std::stoi(readline[7]);
            int x = std::stoi(readline[8]);
            int y = std::stoi(readline[9]);

            Player *p=new Player(readline[0],readline[1],readline[2],
                    readline[3],n,readline[5],u,v,x,y);
        }
    }
    file.close();
}*/
template <typename T>
void vectortoarray(vector<T> vec, T *arr , int arrsize){
    for (int i=0; i<arrsize;i++){
        arr[i]=vec[i];
    }
}
#endif // FN_H
