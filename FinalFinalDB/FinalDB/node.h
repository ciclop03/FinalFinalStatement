#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <string>
template <typename K,typename V> class HashTable;
template <typename K,typename V>
class Node
{
    friend class HashTable<K,V>;
public:
    Node(const K &k,const V &v)
        :key(k),data(v),nextPtr(nullptr)
    {
    }
    V getData() const;
    void setData(const V &value);

    K getKey() const;
    void setKey(const K &value);

    Node<K, V> *getNextPtr() const;
    void setNextPtr(Node<K, V> *value);
    V &getDataPtr()
    {
        return this->data;
    }
private:
    V data;
    K key;
    Node<K, V> *nextPtr;
};

template<typename K,typename V>
V Node<K,V>::getData() const
{
    return data;
}
template<typename K,typename V>
void Node<K,V>::setData(const V &value)
{
    data = value;
}
template<typename K,typename V>
K Node<K,V>::getKey() const
{
    return key;
}
template<typename K,typename V>
void Node<K,V>::setKey(const K &value)
{
    key = value;
}
template<typename K,typename V>
Node<K, V> *Node<K,V>::getNextPtr() const
{
    return nextPtr;
}
template<typename K,typename V>
void Node<K,V>::setNextPtr(Node<K, V> *value)
{
    nextPtr = value;
}

#endif // NODE_H
