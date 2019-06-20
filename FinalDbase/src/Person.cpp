#include "Person.h"
#include <string>
#include <iostream>

Person::Person(std::string name,std::string lastname,std::string country, char gender, int age)
{
    this->name=name;
    this->lastname=lastname;
    this->country=country;
    this->gender=gender;
    this->age=age;
}


Person::Person()
{
            name = "N/A";
            lastname= "N/A";
            country = "N/A";
            gender='m';
            age=-1;
}

Person::~Person()
{
    //dtor
}
