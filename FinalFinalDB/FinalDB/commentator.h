#ifndef COMMENTATOR_H
#define COMMENTATOR_H
#include <algorithm>
#include <person.h>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
class Commentator : public Person
{
    public:
        Commentator();
        Commentator(std::string name, std::string lastname, std::string country, std::string gender, int age);///ctruct vacio
        Commentator(std::string name, std::string lastname, std::string country, std::string gender, int age,int votes);
        ~Commentator();
        void sortByVote();

        bool compare(string a, string b){
           // cout << "compare(" << a << "," << b << ")" << endl;
            return (a.compare(b) < 0);
        }

        void talk()
        {
            cout << "i am commentator";
        }
    protected:

    private:
        int votes;
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

};

#endif // COMMENTATOR_H
