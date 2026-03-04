/*
Platform: Codeforces
Problem: Lucky

Difficulty: Easy
Date: 2026-03-04
*/

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i=0 , j=3;
        int suma=0,sumb=0;
        while(i<3 && j<6){
            suma+=(s[i++]-'0');
            sumb+=(s[j++]-'0');
        }
        if(suma==sumb){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

