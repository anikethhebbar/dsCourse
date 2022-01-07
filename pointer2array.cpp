#include <iostream>
#include <stdio.h>
#include<stdlib.h>

using namespace std;
int main()
    
{
    int *p;
    p=(int *)malloc(5*sizeof(int)); //{p = new int [5]} for cpp 
      
    p[0] = 12;
    p[1] = 54;
    p[2] = 34;
    p[3] = 44;
    p[4] = 14;
    
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] <<endl;
    }

    free(p);//delete [] p;
    return 0;
    
}
