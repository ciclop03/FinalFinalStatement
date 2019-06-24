

#ifndef NODE_H
#define NODE_H
#include <iostream>
template <typename T> class HashTables;
template <typename T>
class Node
{
    friend class HashTables<T>;//
public:
    Node(T &d,int &k)//construct
        :data(d),key(k),nextPtr(nullptr){}//initialization
    T getData()//this function return data
    {
        return this->data;
    }
    int getKey()
    {
        return this->key;
    }
    void setData(T & d)
    {
        this->data=d;
    }
    Node *getNextPtr()//this function return nextPtr
    {
        return this->nextPtr;
    }
    void setNextPtr(Node *ptr)
    {
        this->nextPtr=ptr;
    }

private:
    T data;
    int key;
    Node *nextPtr;

};

#endif // NODE_H
