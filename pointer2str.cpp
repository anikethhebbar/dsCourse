#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    // rectangle r={10,5};
    struct rectangle *p;
    // rectangle *p=&r;
    p = new rectangle;
    p->length = 10;
    p->breadth = 5;

    /*
        struct rectangle *p;
        p = (struct rectangle*)malloc(sizeof(struct rectangle));
        p->length = 1o;
        p->breadth = 5;
        all
    */
    // printf("%d\n", p->length);
    cout << p->length << endl;
    cout << p->breadth << endl;

    return 0;
}
