#include<iostream>

using namespace std;
float celcious(float f){
return (f-32)*(5./9.);
}
int main(){
    float f;
    cin>>f;
    celcious(f);
    cout<<"Fahrenheit"<<" "<<f<<endl;
    cout<<"celcious"<<" "<<celcious(f);
    return 0;

}