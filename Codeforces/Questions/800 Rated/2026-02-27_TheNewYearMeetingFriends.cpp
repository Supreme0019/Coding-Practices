#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int s=x+y+z;
    int maxd=max(x,max(y,z));
    int mind=min(x,min(y,z));
    int d=s-maxd-mind;
    int sum=abs(x-d)+abs(y-d)+abs(z-d);
    cout<<sum<<endl;
}