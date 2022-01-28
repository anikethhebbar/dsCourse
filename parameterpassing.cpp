#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int num1 = 10;
    int num2 = 20;

    swap(&num1, &num2);
    cout << "First no. is " << num1 << endl;
    cout << "Second no. is " << num2 << endl;

    return 0;
}