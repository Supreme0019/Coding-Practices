#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    //cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        vector<int> arr(n);
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int half=sum/2;
        int cost=0,count=0;
        sort(arr.begin(),arr.end());
        for (int i = n-1; i >=0; i--)
        {
            cost+=arr[i];
            count++;
            if(cost>half){
                break;
            }
        }
        cout<<count<<endl;
    }
}