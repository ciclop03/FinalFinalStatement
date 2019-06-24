#include "filemanager.h"

FileManager::FileManager(string fileName, string content)
    :fileName(fileName),content(content)
{
    ofstream file;
    file.open(fileName);
    file << content;
}
