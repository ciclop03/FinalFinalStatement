#ifndef FACTORY_H
#define FACTORY_H
#include "personfactory.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include "player.h"
using namespace std;
class Factory:public PersonFactory
{
public:
    Person *createPerson(const  char *type);
};

#endif // FACTORY_H
