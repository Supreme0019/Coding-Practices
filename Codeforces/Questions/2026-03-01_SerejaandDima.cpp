#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int i=0,j=a.size()-1,cnt=1;
    int s=0,d=0;
    while(i<=j ){
        if(cnt&1){
            if(a[i]>=a[j]){
                s+=a[i++];
                
            }
            else{
                s+=a[j--];
            }
            cnt++;
        }
        else{
            if(a[i]>=a[j]){
                d+=a[i];
                i++;
            }
            else{
                d+=a[j--];
            }
            cnt++;
        }
    }
    cout<<s<<" "<<d<<endl;
}
