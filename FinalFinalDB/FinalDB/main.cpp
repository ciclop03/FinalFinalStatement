#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "person.h"
#include "player.h"
#include "commentator.h"
#include "personfactory.h"
#include "factory.h"

#include "databasemanagementsystem.h"
void proofFactory()
{
    PersonFactory *personFactory;
    Person *person;
    personFactory=new Factory;
    person=personFactory->createPerson("Player");
    person->talk();
    person=personFactory->createPerson("Commentator");
    person->talk();
}
void proofFileManager()
{
   // FileManager *n=new FileManager("hello.txt","karin,12,12");

}

void proofHash()
{
    int a=120;
    Player *p=new Player("a","b","usa","m",20,"punk",180,4,6,2500);
    p->showdata();
    string ss="hello";
    HashTable<string,Player> *n=new HashTable<string,Player>(a);
    n->insert(ss,*p);
    Node<string,Player> *node=n->find(ss);
    //p=node->getData();
    cout << n;

}
void proofbdms()
{
    DataBaseManagementSystem *db=new DataBaseManagementSystem();
}
int main(int argc, char *argv[])
{
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
    return a.exec();*/

}
