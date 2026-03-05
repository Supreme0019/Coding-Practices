// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int mini=min(a,b);
    cout<<mini<<" ";
    int sp= (a+b-(2*mini))/2;
    cout<<sp<<endl;
    return 0;
}