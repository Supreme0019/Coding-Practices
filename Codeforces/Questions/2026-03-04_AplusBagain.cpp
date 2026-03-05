// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int i=a%10,j=a/10;
        cout<<i+j<<endl;
    }
    return 0;
}