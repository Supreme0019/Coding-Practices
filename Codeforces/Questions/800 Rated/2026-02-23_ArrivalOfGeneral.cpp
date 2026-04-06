#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> army(n);
    for(int i=0 ; i<n ; i++){
        cin>>army[i];
    }
    int mini=INT_MAX;
    int maxi=INT_MIN;
    int a=0,b=0;
    for(int i=n-1 ; i>=0 ; i--){
        if(army[i]>=maxi){
            maxi=army[i];
            a=i;
        }
    }
    for(int i=0 ; i<n ; i++){
        if(army[i]<=mini){
            mini=army[i];
            b=i;
        }
    }
    int sum=a+(n-b-1);
    if(a>b){
        sum=sum-1;
    }
    cout<<sum<<endl;
}