#ifndef COMMENTATOR_H
#define COMMENTATOR_H

#include <Person.h>


class Commentator : virtual public Person
{
    public:
        Commentator(std::string name, std::string lastname, std::string country, char gender, int age);///ctruct vacio
        Commentator(std::string name, std::string lastname, std::string country, char gender, int age,int votes);
        virtual ~Commentator();

    protected:

    private:
        int votes;
};

#endif // COMMENTATOR_H
