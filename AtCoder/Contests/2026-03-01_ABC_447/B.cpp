#include <bits/stdc++.h>


using namespace std;

int main() {
    string s;
    cin>>s;
    int arr[26]={0};
    for(char i:s){
        arr[i-'a']++;
    }
    int maxi=INT_MIN;
    for(int i=0 ; i<26 ; i++){
        maxi=max(maxi,arr[i]);
    }
    string res="";
    for(char i:s){
        if(arr[i-'a']!=maxi) res+=i;
    }
    cout<<res<<endl;
}