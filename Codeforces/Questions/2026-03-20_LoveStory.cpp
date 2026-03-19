#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--){
        string a="codeforces";
        string b;
        cin>>b;
        int count=0;
        for(int i=0 ; i<a.size(); i++){
            if(a[i]!=b[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}