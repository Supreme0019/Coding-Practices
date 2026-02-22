#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    vector<int> mag(n);
    for(int i=0 ; i<n ; i++){
        cin>>mag[i];
    }
    int count=0;
    for(int i=1 ; i<n ; i++){
        if(mag[i-1]!=mag[i]) count++;
    }
    cout<<count+1<<endl;
} 
