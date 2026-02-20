#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k,n,w;
    cin>>k>>n>>w;
    long long cost=0;
    for(int i=1 ; i<=w ; i++){
        cost+=i*k;
    } 
    long long diff=max(0LL,cost-n);
    cout<<diff<<endl;
}