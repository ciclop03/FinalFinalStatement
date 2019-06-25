#include "filemanager.h"



FileManager::FileManager()
{

}

void FileManager::writeFile(string fileName, string content)
{
    ofstream file;
    file.open(fileName,ios::app);
    file << content;
    file.close();
}
