#include<iostream>
#include<list>
using namespace std;
int main(){
    list<string>name={"karthi","santhosh","barath","anish","lokesh","k7","mohan","vishwanathan"};
      name.push_back("kanava");
        name.push_back("sriram");
        name.push_back("vijay");
        name.push_front("akash");
    for(string i:name)
    {
        cout<<i<<endl;
        }
      
       
        
        
    return 0;
}
    