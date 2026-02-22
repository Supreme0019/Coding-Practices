#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    vector<char> a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    
    
    while(t--){
        for(int i=1; i<n ; i++){
            if(a[i-1]=='B' && a[i]=='G'){
                swap(a[i-1],a[i]);
                i++;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        cout<<a[i];
    }
} 