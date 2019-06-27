#include "facade.h"
template<typename V,typename K>
Facade<V,K>::Facade()
{
    hash=new HashTable<V,K>(100);
}
