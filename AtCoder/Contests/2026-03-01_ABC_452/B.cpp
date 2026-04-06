// 1. Compiler Optimizations (The "Make it go brrr" lines)
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

// 2. The Universal Header
#include <bits/stdc++.h>
using namespace std;

// 3. Type Aliases (Shorthand)
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

// 4. Macros (Reduces typing in high-pressure situations)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define f first
#define s second

// 5. Constants
const int MOD = 1e9 + 7; // Or 998244353
const ll INF = 1e18;

// 6. The actual solution function
void solve() {
    // Problem logic goes here!
    int h,w;
    cin >> h>>w;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if(i==0 || i==h-1){
                cout<<"#";
            }
            else{
                if(j==0 || j==w-1){
                    cout<<"#";
                }
                else{
                    cout<<".";
                }
            }
        }
        cout<<endl;
        
    }
    
    
}

// 7. Main Function with Fast I/O
int main() {
    // The two magic Fast I/O lines
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t; // Remove this if the problem only has one test case
    while (t--) {
        solve();
    }
    
    return 0;
}