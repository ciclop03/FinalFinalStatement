
#ifndef HASHTABLES_H
#define HASHTABLES_H
#include <node.h>
#include <iostream>
// T is NodeType
const int HashTablesSize=128;
template<typename T>
class HashTables
{
public:
    HashTables();
    ~HashTables();
    //operator overload for print hashTable
    void insert(T &,)
    void put(T &,int &);
    void remove(int &);
    friend std::ostream & operator << (std::ostream & out,HashTables *hash)
    {
        for (int i = 0; i < HashTablesSize; ++i) {
            Node<T> *temPtr=hash->table[i];
            if(temPtr)
            {
                out <<"[" << i << "]-->" ;
            }
            while(temPtr)
            {
                out <<"(" << temPtr->getData().getNick() << "," << temPtr->getKey() << ")-->";
                temPtr=temPtr->getNextPtr();
            }

            if(hash->table[i])
                out << '\n';
        }
        return out;
    }

private:
    Node<T> **table;

};

#endif // HASHTABLES_H
