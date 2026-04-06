#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    int n=a.size();
    string ans="";
    for(int i=0 ; i<n ; i++){
        if(a[i]!=b[i]){
            ans.push_back('1');
        }
        else{
            ans.push_back('0');
        }
    }
    for(int i=0 ; i<n ; i++){
        cout<<ans[i];
    }
}