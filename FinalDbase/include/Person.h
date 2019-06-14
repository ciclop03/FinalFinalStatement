#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
    public:
        Person(string name, string lastname,string country, char gender, int age);
        virtual ~Person();

    protected:
        string name, lastname,country;
        char gender;
        int age;

    private:

};

#endif // PERSON_H
