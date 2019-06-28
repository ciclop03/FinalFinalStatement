#ifndef PERSONFACTORY_H
#define PERSONFACTORY_H
#include "person.h"
#include "commentator.h"
#include "player.h"
/// interfa (clase abstrcata)
class PersonFactory
{
public:
    virtual Person *createPerson(const char *)=0;
    virtual ~PersonFactory(){}
};
#endif // PERSONFACTORY_H
