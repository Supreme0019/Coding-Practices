#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    //cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long half=0;
        if(n&1) half=n/2+1;
        else half=n/2;   
        if(k<=half){
            cout<<k*2-1<<endl;
        }
        else{
            cout<<(k-half)*2<<endl;
        }
    }
}