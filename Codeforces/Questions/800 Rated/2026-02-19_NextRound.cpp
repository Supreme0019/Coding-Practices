#include <bits/stdc++.h>

using namespace std;
int main() {
    int n,k,count=0;
    cin>>n>>k;
    vector<int> points(n);
    for(int i=0 ; i<n ; i++){
        cin>>points[i];
    }
    int t=points[k-1];
    for(int i=0 ; i<n ; i++){
        if(points[i]>=t && points[i]!=0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}