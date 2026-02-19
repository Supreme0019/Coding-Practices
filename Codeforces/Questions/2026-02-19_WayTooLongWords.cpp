#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int l=s.length();
        string ans="";
        if(l>10){
            ans.push_back(s[0]);
            ans += to_string(l - 2);
            ans.push_back(s[l-1]);
            cout<<ans<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}