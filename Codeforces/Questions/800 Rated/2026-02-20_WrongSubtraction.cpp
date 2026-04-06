#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0 ; i<k; i++){
        int last=n%10;
        if(last==0){
            n=n/10;
        }
        else{
            n-=1;
        }
    }
    cout<<n<<endl;
}