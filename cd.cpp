#include<iostream>
#include<string>
using namespace std;
class Car{
    public:
    string name;
    int age;
   string DOB;
    Car(string a,int b, string c);//CONSTRUCTOR
    ~Car();
    
};
 Car::Car(string a,int b, string c){
    cout<<"Name: "<<a<<endl<<"Age:"<<b<<endl<<"Date of birth: "<<c<<endl;
    cout<<endl;
    }
    
    Car::~Car(){//DESTRUCTOR
       cout<<"BOOM"<<endl;
    }
int main(){
    Car duo("santhosh",20,"16/01/2004");
    Car duo1("karthik",23,"22/07/2003");
    Car duo2("karthik",23,"22/07/2003");
    Car duo3("karthik",23,"22/07/2003");
    Car duo4("karthik",23,"22/07/2003");
    Car duo5("karthik",23,"22/07/2003");
    Car duo6("karthik",23,"22/07/2003");
    Car duo7("karthik",23,"22/07/2003");
    Car duo8("karthik",23,"22/07/2003");
    return 0;
}

