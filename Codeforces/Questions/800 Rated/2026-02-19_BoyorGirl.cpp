#include <bits/stdc++.h>

using namespace std;
int main() {
    string s;
    cin>>s;
    int ans[26]={0};
    for(int i=0 ; i<s.length() ; i++){
        ans[s[i]-'a']++;
    }
    int count=0;
    for(int i=0 ; i<26 ; i++){
        if(ans[i]>0){
            count++;
        }
    }
    if(count&1){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}