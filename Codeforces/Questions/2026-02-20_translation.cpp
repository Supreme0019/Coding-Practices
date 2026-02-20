#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    bool flag=1;
    if(a.length()!=b.length()){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0,j=a.length()-1 ; i<a.length()&& j>=0 ; i++,j--){
        if(a[i]!=b[j]){
            flag=0;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}