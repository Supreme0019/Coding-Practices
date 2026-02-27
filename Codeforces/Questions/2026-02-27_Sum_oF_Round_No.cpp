/*
Platform: Codeforces
Problem: Sum oF Round No

Difficulty: Easy
Date: 2026-02-27
*/


#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long count=1;
        vector<long long> ans;
        while(n>0){
            long long digit=n%10;
            if(digit!=0){
                ans.push_back(digit*count);
                
            }
            count=count*10;
            n=n/10;
        }
        cout<<ans.size()<<endl;
        for(int i=ans.size()-1 ; i>=0 ; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

