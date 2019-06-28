#ifndef FACTORY_H
#define FACTORY_H
#include "personfactory.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include "player.h"
#include "character.h"
using namespace std;
/// fabrica concreta
class Factory:public PersonFactory
{
public:
     static Person *createPerson(const  char *type);

};

#endif // FACTORY_H
