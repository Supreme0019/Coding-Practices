#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i].first;
        cin>>a[i].second;
    }
    int count=0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i!=j){
                if(a[i].first==a[j].second){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
}