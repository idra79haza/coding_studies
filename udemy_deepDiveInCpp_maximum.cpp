#include<iostream>
using namespace std;

// 오랜만에 해서 그런가 max를 다르게 찾으려고 노력함.....후
int Max(int a,int b,int c)

{

    if(a>b && a>c)
      return a;

    else if( b>c)
      return b;

    else
      return c;


}

void Main()
{
    cout<<Max(7,10,5);
}
