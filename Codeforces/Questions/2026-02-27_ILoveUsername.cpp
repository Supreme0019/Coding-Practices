#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int count=0;
    for(int i=0 ; i<n ; i++){
        int n;
        cin>>n;
        if(n>maxi){
            maxi=n;
            if(i!=0) count++;
        }
        if(n<mini){
            mini=n;
            if(i!=0) count++;
        }
    }
    cout<<count<<endl;
}