#include "Commentator.h"

Commentator::Commentator(std::string name, std::string lastname, std::string country, char gender, int age, int votes)
                         :Person(name,lastname,country,gender,age)
{
    this->votes=votes;
}
Commentator::Commentator(std::string name, std::string lastname, std::string country, char gender, int age)
                        :Person(name, lastname, country, gender, age)
{
    this->votes=0;
}
Commentator::~Commentator()
{
    //dtor
}
