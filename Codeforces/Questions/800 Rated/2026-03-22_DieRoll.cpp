#include <bits/stdc++.h>
using namespace std;

int main() {
    int y,w;
    cin >> y >> w;

    int a=max(y,w);
    int score=6-a+1;
    
    int common=__gcd(score,6);
    cout<<score/common<<'/'<<6/common<<endl;
    return 0;
}