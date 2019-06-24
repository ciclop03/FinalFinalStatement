#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <fstream>
#include <iostream>
using namespace std;
class FileManager
{
public:
    FileManager(string fileName,string content);

private:
    string fileName;
    string content;
};

#endif // FILEMANAGER_H
