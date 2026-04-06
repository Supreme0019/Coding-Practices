#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int count=0;

    for(int i=0 ; i<d ; i++){
        if(k==1||l==1||m==1||n==1){
            cout<<d<<endl;
            return 0;
        } 
        if((i+1)%k==0 || (i+1)%l==0 || (i+1)%m==0 || (i+1)%n==0 ){
            count++;
        }
    }
    // for(int i=0 ; i<d ; i++){
    //     if(damage[i]==true){
    //         count++;
    //     }
    // }
    cout<<count<<endl;
}