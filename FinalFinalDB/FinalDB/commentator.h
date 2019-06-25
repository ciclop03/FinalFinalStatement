#ifndef COMMENTATOR_H
#define COMMENTATOR_H
#include <algorithm>
#include <Person.h>
#include <fstream>
#include <iostream>
#include <vector>
#include "filemanager.h"
using namespace std;
class Commentator : public Person
{
    public:
        Commentator();
        Commentator(std::string name, std::string lastname, std::string country, char gender, int age);///ctruct vacio
        Commentator(std::string name, std::string lastname, std::string country, char gender, int age,int votes);
        ~Commentator();
        void sortByVote();
        vector<string> split(string);
        bool compare(string a, string b){
           // cout << "compare(" << a << "," << b << ")" << endl;
            return (a.compare(b) < 0);
        }

        void talk()
        {
            cout << "";
        }
    protected:

    private:
        int votes;
        FileManager *fileManager=new FileManager();
};

#endif // COMMENTATOR_H
