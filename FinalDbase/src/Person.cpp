#include "Person.h"
#include <string>

Person::Person(string name,string lastname,string country, string gender, int age){
    this->name=name;
    this->lastname=lastname;
    this->country=country;
    this->gender=gender;
    this->age=age;
}

Person::~Person()
{
    //dtor
}
