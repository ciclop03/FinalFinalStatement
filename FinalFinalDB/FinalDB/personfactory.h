#ifndef PERSONFACTORY_H
#define PERSONFACTORY_H
#include "person.h"
#include "commentator.h"
#include "player.h"

class PersonFactory
{
public:
    virtual Person *createPerson(const char *)=0;
};

#endif // PERSONFACTORY_H
