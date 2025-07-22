// User function Template for C++
#include<iostream>

using namespace std;
class Solution {
  public:
    double simpleInterest(double P, double R, double T) {
    return P*R*T/100;
        
    }
};
int main(){
    double P,T,R;
    cin>>P>>R>>T;
    Solution far;
    cout<<far.simpleInterest(P,R,T);
    return 0;
}

