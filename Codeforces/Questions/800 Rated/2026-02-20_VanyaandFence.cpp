#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    vector<int> height(n);
    for(int i=0 ; i<n ; i++) cin>>height[i];
    int count=0;
    for(int i:height){
        if(i<=h){
            count++;
        }
        else{
            if(i%h==0){
                count+=i/h;
            }
            else{
                count+=i/h +1;
            }
        }
    }
    cout<<count<<endl;
}