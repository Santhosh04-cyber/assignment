#include<iostream>
using namespace std;
int overloading(int a,int b){
    return a+b;
}
float overloading(float a,float b){
    return a+b;
}
int main (){
    int a;
    float b;
    a=overloading(10,7);
     b=overloading(18.7f,56.4f);
    cout<<"sum of integer:"<<a<<endl;  
    cout<<"sum of float:"<<b<<endl;  
    return 0;
}