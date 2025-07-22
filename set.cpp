#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int ,string> num={{9,"name"},{4,"names"}};
    // for(int nums:num)
    num[9]="santhosh";
    cout<<num[9]<<endl;
    cout<<num[4]<<endl;
    return 0;
}