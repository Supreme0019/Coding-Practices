#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int first=0,secont=1;
    int third=0;
    if(n==1){
        cout<<0<<endl;
    }
    else if(n==2){
        cout<<1<<endl;
    }
    else{
        while(n>2){
            third=first+secont;
            first=secont;
            secont=third;
            n--;
        }
        cout<<third<<endl;
    }
    return 0;
}