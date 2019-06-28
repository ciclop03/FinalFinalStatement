#include "commentator.h"

Commentator::Commentator(std::string name, std::string lastname, std::string country, std::string gender, int age, int votes)
                         :Person(name,lastname,country,gender,age)
{
    string content=name+','+lastname+','+country+','+gender+','+to_string(age)+','+to_string(votes);
    writeFile("Commentator.txt",content);
}
Commentator::Commentator()
{

}

Commentator::Commentator(std::string name, std::string lastname, std::string country, std::string gender, int age)
                        :Person(name, lastname, country, gender, age)
{
    this->votes=0;
}
Commentator::~Commentator()
{
    //dtor
}

void Commentator::sortByVote()
{
    string line;
    ifstream file;
    file.open("Commentator.txt");
    vector<string> readline;
    string sortedList[3];
    if(file.is_open())
    {
        int i=0;
        while (getline(file,line)) {
            readline=split(line,',');
            cout << readline[1];
            sortedList[i]=readline[1];
            i++;
        }
    }
    file.close();
    cout << endl;
    sort(begin(sortedList),end(sortedList));
    for (int i=0;i<3;i++) {
        cout << sortedList[i] << endl;
    }
}


