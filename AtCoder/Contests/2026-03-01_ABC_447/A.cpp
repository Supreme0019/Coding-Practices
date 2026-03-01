#include <bits/stdc++.h>


using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    if(n&1){
        if(m<=((n/2)+1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        if(m<=(n/2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}