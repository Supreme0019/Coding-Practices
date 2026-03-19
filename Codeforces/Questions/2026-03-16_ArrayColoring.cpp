// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long sum=0;
        for(int i=0 ; i<n ; i++){
            long long n;
            cin>>n;
            sum+=n;
        }
        if(sum&1){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}