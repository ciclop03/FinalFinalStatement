#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "person.h"
#include "player.h"
#include "commentator.h"
#include "personfactory.h"
#include "factory.h"

#include "databasemanagementsystem.h"
void testFactory()
{
    PersonFactory *personFactory;
    Person *person;
    personFactory=new Factory;
    person=personFactory->createPerson("Player");
    person->showdata();
    person=personFactory->createPerson("Commentator");
    person->showdata();
}
/*

void proofFileManager()
{
   // FileManager *n=new FileManager("hello.txt","karin,12,12");

}

void proofHash()
{
    int a=120;
    T *p=new T("a","b","usa","m",20,"punk",180,4,6,2500);
    p->showdata();
    string ss="hello";
    HashTable<string,T> *n=new HashTable<string,T>(a);
    n->insert(ss,*p);
    Node<string,T> *node=n->find(ss);
    //p=node->getData();
    cout << n;

}
void proofbdms()
{
    DataBaseManagementSystem *db=new DataBaseManagementSystem();
}*/
int main(int argc, char *argv[])
{
    /*
    proofHash();

    //Commentator *c=new Commentator();
    //Commentator *nc=new Commentator("abi","rex","usa",'m',31,0);
    //c->sortByVote();
    //proofHash();
    //proofFileManager();
    /*
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
    Player playerArray= new Player[60];
*/
    Player arr_[50] ;
    PersonFactory *personfactory;





}
