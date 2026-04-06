/*
Platform: Codeforces
Problem: Elephant
Link: na
Difficulty: easy
Date: 2026-02-20
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x<=5){
        cout<<1<<endl;
 
    }
    else{
        if(x%5==0){
            cout<<(x/5)<<endl;
        }
        else{
            cout<<(x/5)+1<<endl;
        }
    }
    return 0;
}

