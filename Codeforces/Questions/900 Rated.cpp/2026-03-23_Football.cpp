#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    //cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cn0=1,cn1=1;
        int max0=0,max1=0;
        for (int i = 0; i < s.size()-1; i++)
        {
            if(s[i]=='0' && s[i+1]=='0'){
                cn0++;
            }
            else if(s[i]=='1' && s[i+1]=='1'){
                cn1++;
            }
            else{
                cn0=1;
                cn1=1;
            }
            max0=max(max0,cn0);
            max1=max(max1,cn1);
        }
        if(max0>=7 || max1>=7){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
}