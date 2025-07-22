#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){ 
    string text;
    fstream raw("karthikeyan.txt",ios::app);
    raw<<"iam bot"<<endl;
    raw.close();
    fstream raws("karthikeyan.txt");
   while(getline(raws,text)){
    cout<<text<<endl;
   } 
  raws.close();
  return 0;
}