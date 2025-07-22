#include<iostream>
#include<string>
using namespace std;

class student{
    string name;
    int age;

    public:
    student(string n ,int m){
            name=n;
            age=m;
    }
friend void myfun(student first,student second);
};
    void myfun(student first,student second){
        cout<<first.name << " -->  "<< first.age<<endl;
        cout<<second.name << " -->  "<<second.age;
    }
int main(){
    student obj1("santhosh",20);
    student obj2("kanava",20);
    myfun(obj1,obj2);
    return 0;

}