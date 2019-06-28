#ifndef DATABASEMANAGEMENTSYSTEM_H
#define DATABASEMANAGEMENTSYSTEM_H
#include<iostream>
#include<fstream>
#include "hashtable.h"
#include "hashtable.cpp"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "player.h"
using namespace std;
class DataBaseManagementSystem
{
public:
    DataBaseManagementSystem();
    void loadPlayerIntoHash();
private:
    void writeFile(string fileName, string content)
    {
        ofstream file;
        file.open(fileName,ios::app);
        file << content;
        file.close();
    }
    vector<string> split(string str,char separator)
    {
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
    HashTable<string,T> *hashPlayer;
};

#endif // DATABASEMANAGEMENTSYSTEM_H
