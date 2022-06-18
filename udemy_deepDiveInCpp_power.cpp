#include<iostream>
using namespace std;


//write a pow() function here 

// power함수를 직접 구현하는데 처음에 어려움을 겪음
int pow(int x, int y)
{
    int z = 1;
    for (int i=1; i <= y; i++)
    {
        z = z*x;
    }
    return z;
}

void Main()
{
    cout<<pow(2,5);
}

