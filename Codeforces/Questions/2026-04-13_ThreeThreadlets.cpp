/*
Platform: Codeforces
Problem: ThreeThreadlets

Difficulty: Easy
Date: 2026-04-13
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b && b==c) cout<<"YES"<<endl;
        else{
            vector<long long> v = {a, b, c};
            sort(v.begin(), v.end());
            if(v[1]%v[0]==0 && v[2]%v[0]==0 && ((v[1]/v[0])+(v[2]/v[0])-2<=3)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}

