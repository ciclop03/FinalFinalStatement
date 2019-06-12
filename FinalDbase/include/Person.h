#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
    public:
        Person(string name, string lastname,string country, string gender, int age);
        virtual ~Persona();

    protected:
        string name, lastname,country, gender;
        int age;

    private:

};

#endif // PERSON_H
