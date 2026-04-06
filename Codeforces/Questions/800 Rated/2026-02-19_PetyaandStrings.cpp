#include <bits/stdc++.h>

using namespace std;
int main() {
    string a,b;
    cin>>a>>b;
    int na=0,nb=0,flag=0;
    for (int i=0 ; i<a.length() ; i++) {
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
        na=(int)a[i];
        nb=(int)b[i];
        if(na>nb){
            flag=1;
            break;
        }
        else if(na<nb){
            flag=-1;
            break;
        }
    }
    cout<<flag<<endl;
    return 0;
}