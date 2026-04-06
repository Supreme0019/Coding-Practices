#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    if(n<4444){
        cout<<"NO"<<endl;
        return 0;
    } 
    int count=0;
    while(n){
        int digit=n%10;
        if(digit==4 || digit==7){
            count++;
        }
        n=n/10;
    }
    if(count>0 && (count==4 || count==7)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}