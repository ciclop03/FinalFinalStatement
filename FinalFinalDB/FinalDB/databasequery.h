#ifndef DATABASEQUERY_H
#define DATABASEQUERY_H
#include <iostream>
#include "hashtable.h"
#include "hashtable.cpp"
using namespace std;
class DataBaseQuery
{
public:
    DataBaseQuery();
    void searchBye(string);
    void deleteByKey(string);
    void updateByKey(string);
};
#endif // DATABASEQUERY_H
