#ifndef FACADE_H
#define FACADE_H
#include "hashtable.h"
#include "hashtable.cpp"
using namespace std;
template <typename V,typename K>
class Facade
{
public:
    Facade();
private:
    HashTable<V,K> *hash;
    //Record *record;
};

#endif // FACADE_H
