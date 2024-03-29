#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <iostream>
#include <string>
#include "node.h"
#include "fstream"
using namespace  std;
template<typename K,typename V>
class HashTable
{
public:
   /* HashTable(const unsigned int &){
        ///set initial values:
        hashTableSize =60;
        sizee=0;///at the beginning has nothing
        table = new Node<K,V>*[hashTableSize];

        /// sets or initialize all elements as NULL (no data)
        for (int i=0; i<hashTableSize;i++){
            table[i]= NULL;
        }
        /// Phantom node with key -1


    }*/
    HashTable(const unsigned int &);
    ~HashTable();
    void insert(K &,const V & );
    Node<K,V>* find(K &);
    bool isInHash(K &);
    int getHash(K &);
    unsigned int getHashTableSize() const;
    void setHashTableSize(unsigned int value);
    void createIndexFileFromHash();
    void setHashFronIndexFile();
    friend std::ostream & operator << (std::ostream &out,HashTable h)
    {
    }
    string getNameOfDbTable() const;
    void setNameOfDbTable(const string &value);


private:
    ///capacidad max de hash
    unsigned int hashTableSize;
    ///Es un arreglo de nodos (que a la vez es un arreglo)
    Node<K,V> **table;
    /*
    /// tamaño actual de hash *NEW*
    int sizee;
    /// nodo fntasma(?) *NEW*
    Node<K,V> **pnode;
*/

};
#endif // HASHTABLE_H
