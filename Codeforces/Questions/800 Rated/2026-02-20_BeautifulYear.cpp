#include <bits/stdc++.h>
using namespace std;
int check(int n){
    string s=to_string(n);
    set<char> digits(s.begin(),s.end());
    if(digits.size()==4){
        return true;
    }
    return false;
}
int main()
{
    int y;
    cin>>y;

    while(++y){
        if(check(y)){
            cout<<y<<endl;
            break;
        }
    }
}