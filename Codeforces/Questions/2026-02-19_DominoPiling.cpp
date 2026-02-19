#include <bits/stdc++.h>

using namespace std;
int main() {
    int n,m;
    cin>>m>>n;
    int t=m*n;
    if(t&1){
        cout<<(t-1)/2<<endl;
    }
    else{
        cout<<t/2<<endl;
    }
    return 0;
}