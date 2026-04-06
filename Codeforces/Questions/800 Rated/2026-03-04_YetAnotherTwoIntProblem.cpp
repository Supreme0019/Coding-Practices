// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        int count=0;
        if(a==b){
            cout<<0<<endl;
        } 
        else{
            int n=10;
            int diff=abs(a-b);
            if(diff%10==0) count+=(diff/10);
            else count+=(diff/10) +1;
            cout<<count<<endl;
        }
    }
    return 0;
}