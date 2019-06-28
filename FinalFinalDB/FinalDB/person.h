#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
class Person
{
    public:
        Person(std::string name, std::string lastname,std::string country, std::string gender, int age);
        Person();
        virtual void showdata()=0;
        virtual ~Person();
        static Person makeperson(int choice);

    protected:
        std::string name, lastname,country, gender;
        int age;
    private:

};

#endif // PERSON_H
