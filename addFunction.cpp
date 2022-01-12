#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;

    return c;
}

int main()
{
    int num1 = 10;
    int num2 = 24;
    int sum;
    sum = add(num1, num2);

    printf("Sum is: %d\n", sum);//cout<<"Sum is "<<sum;
    return 0;
}