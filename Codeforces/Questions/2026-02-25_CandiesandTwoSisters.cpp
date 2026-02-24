#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
    
        if(n<3){
            cout<<0<<endl;
        }
        else{
            long long count=(n/2);
            if(n&1){
                cout<<count<<endl;
            }
            else{
                cout<<count-1<<endl;
            }
        }
    }
    
}