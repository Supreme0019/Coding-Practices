#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    for(int i=2 ; i<=k ; i++){
        bool f=true;
        for(int j=2 ; j<=i ; j++){
            if(i%j==0){
                f=false;
            }
        }
        if(f){
            cout<<i<<" ";
        }
    }
    return 0;
}