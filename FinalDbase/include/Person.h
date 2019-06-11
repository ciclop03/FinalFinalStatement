#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;

class Persona
{
    public:
        Persona(string name, string lastname,string country, string gender, int age);
        virtual ~Persona();

    protected:
        string name, lastname,country, gender;
        int age;

    private:

};

#endif // PERSONA_H
