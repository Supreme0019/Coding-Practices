/*
Platform: Codeforces
Problem: Codeforces Checking

Difficulty: Easy
Date: 2026-03-07
*/

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        char a;
        cin>>a;
        if(a=='c'|| a=='o'||a=='d'||a=='e'||a=='f'||a=='r'||a=='s'){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

