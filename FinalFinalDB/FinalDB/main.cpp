#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "hashtable.h"
#include "hashtable.cpp"
#include "person.h"
#include "player.h"
#include "filemanager.h"
#include "commentator.h"
void proofFileManager()
{
   // FileManager *n=new FileManager("hello.txt","karin,12,12");

}
void proofHash()
{
    Player *p=new Player("a","b","usa",'m',20,"punk",180,4,6,2500);
    p->talk();
    string ss="hello";
    int a=2;
    HashTables<Player> *n=new HashTables<Player>;
    n->put(*p,a);
    cout << n;

}
int main(int argc, char *argv[])
{
    Commentator *c=new Commentator();
    Commentator *nc=new Commentator("abi","rex","usa",'m',31,0);
    c->sortByVote();
    //proofHash();
    //proofFileManager();
    /*
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();*/

}
