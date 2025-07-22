#include<iostream>
#include<ctime>
using namespace std;
int main (){
    time_t clock;
    time(&clock);
   cout<<ctime(&clock);
    return 0;
}