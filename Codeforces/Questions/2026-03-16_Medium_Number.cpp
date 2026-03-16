/*
Platform: Codeforces
Problem: Medium Number

Difficulty: Easy
Date: 2026-03-16
*/

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int ans=a+b+c-max({a,b,c}))-min({a,b,c});
        cout<<ans<<endl;
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
 
        vector<int> v = {a, b, c};
        sort(v.begin(), v.end());
 
        cout << v[1] << endl;  // middle element
    }
 
    return 0;
}
*/

