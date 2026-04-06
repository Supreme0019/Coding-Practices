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
    int n;
    cin >> n;
    vi a(n),b(n);
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
        cin >> b[i];
    } 
    int m;
    cin >> m;
    vector<string> stri(m);
    for (int i = 0; i < m; i++)
    {
        cin >> stri[i];
    }
    bool cabinet[12][12][26]={false};
    for (string str:stri)
    {
        int l=str.length();
        for (int p = 0; p < l; p++)
        {
            int position=p+1;
            int ch=str[p]-'a';
            cabinet[l][position][ch]=true;
        }
        
    }

    for (string str:stri){
        if(str.length()!=n){
            cout<<"No"<<endl;
            continue;
            
        }
        else{
            bool flag=true;
            for (int i = 0; i < n; i++)
            {
                int req_idx=str[i]-'a';
                if(cabinet[a[i]][b[i]][req_idx]==false){
                    flag=false;
                    break;
                }

            }
            if(flag) cout<<"Yes"<<'\n';
            else cout<<"No"<<'\n';
            
        }
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