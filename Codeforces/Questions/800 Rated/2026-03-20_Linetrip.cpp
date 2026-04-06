#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,x;
        cin >> n>>x;
        vector<int> arr(n);
        for(int i=0 ; i<n; i++) cin>>arr[i];
        int maxp=arr[0];
        for(int i=1 ; i<n ; i++){
            maxp=max(maxp,arr[i]-arr[i-1]);
        }
        int last=2*(x-arr[n-1]);
        
        cout<<max(maxp,last)<<endl;
    }
}