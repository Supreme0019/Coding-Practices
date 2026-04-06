#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> check(n,false);
    int p;
    cin>>p;
    for(int i=0 ; i<p ; i++){
        int x;
        cin>>x;
        check[x-1]=true;
    }
    int q;
    cin>>q;
    for(int i=0 ; i<q ; i++){
        int x;
        cin>>x;
        check[x-1]=true;
    }
    for(int i = 0; i <n; i++) {
        if(!check[i]) {
            cout << "Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;
    return 0;
}