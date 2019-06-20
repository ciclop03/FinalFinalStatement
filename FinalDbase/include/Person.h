#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>

class Person
{
    public:
        Person(std::string name, std::string lastname,std::string country, char gender, int age);
        Person();


        virtual ~Person();

    protected:
        std::string name, lastname,country;
        char gender;
        int age;

    private:

};

#endif // PERSON_H
