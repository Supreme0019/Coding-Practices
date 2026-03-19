#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        int count=1;
        int maxc=count;
        for(int i=0 ; i<n-1 ; i++){
            if(a[i]==0){
                count++;
                maxc=max(maxc,count);
            }
            else{
                count=1;
            }
        }
        cout<<maxc<<"\n";
    }
 
    return 0;
}