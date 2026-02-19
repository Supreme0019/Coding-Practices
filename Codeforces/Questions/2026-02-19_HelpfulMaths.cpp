#include <bits/stdc++.h>

using namespace std;
int main() {
    string s;
    cin>>s;
    int* arr=new int[(s.length()/2)+1];
    for(int i=0,j=0 ; i<(s.length()/2)+1 ; i++){
        arr[i]=(int)s[j];
        j+=2;
    }
    sort(arr,arr+(s.length()/2)+1);
    string ans="";
    for(int i=0,j=0 ; i<(s.length()/2)+1 ; i++){
        ans.push_back((char)arr[i]);
        ans.push_back('+');
    }
    ans.pop_back();
    cout<<ans<<endl;
    return 0;
}