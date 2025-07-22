#include<iostream>
using namespace std;
void  swap()
{
    int a=5,b=10;
    cout<<"before swap:a="<<a<<" "<<"b="<<b<<endl;
  b=a+b;
  a=b-a;
  b=b-a;
    cout<<"after swap:a="<<a<<" ""b="<<b;
}
int main()
{
    swap();
    return 0;
}