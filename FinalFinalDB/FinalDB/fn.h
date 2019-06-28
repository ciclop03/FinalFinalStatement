#ifndef FN_H
#define FN_H
#include <iostream>
#include "player.h"
#include "character.h"
#include "commentator.h"

ostream& operator<<(ostream & o, const T& p){
    return o<<p.getNick();
}


#endif // FN_H
