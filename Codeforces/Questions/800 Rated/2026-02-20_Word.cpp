#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int lower=0,upper=0;
    for(char i:s){
        if(islower(i)){
            lower++;
        }
        else{
            upper++;
        }
    }
    if(lower<upper){
        for(char &i:s){
            i=toupper(i);
        }
        cout<<s<<endl;
    }
    else{
        for(char &i:s){
            i=tolower(i);
        }
        cout<<s<<endl;
    }
}