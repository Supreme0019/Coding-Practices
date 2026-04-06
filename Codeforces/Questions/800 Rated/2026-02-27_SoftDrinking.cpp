#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int td=(k*l)/nl;
    int tl=c*d;
    int ts=p/np;
    int toasts=min(td,min(tl,ts));
    cout<<toasts/n<<endl;
}