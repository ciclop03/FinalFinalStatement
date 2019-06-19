#include <iostream>
#include "arr.h"

using namespace std;

int main()
{
    int a=1,b=2,c=3,d=4;
    int *pa=&a;
    int *pb=&b;
    int *pc=&c;
    int *pd=&d;
    int *set_1[4]={pa,pb,pc,pd};
    arr <int> p_set_1(set_1,4);
    return 0;
}
