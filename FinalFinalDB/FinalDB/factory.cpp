#include "factory.h"


Person *Factory::createPerson(const  char *type)
{
    if (strcmp(type,"Player")==0) {
        return new T();
    }
    else if (strcmp(type,"Commentator")==0) {
        return new Commentator();
    }
    return nullptr;
}
