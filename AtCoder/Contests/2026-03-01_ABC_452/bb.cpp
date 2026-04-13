#include <bits/stdc++.h>
using namespace std;

// --- Shorthand Types ---
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

// --- Essential Macros ---
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define f first
#define s second

// --- Constants ---
const int MOD = 1e9 + 7;
const ll INF = 1e18;

// --- Main Solution ---
void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    double pos = 0.5;
    int count = 0;

    for (int i = 0; i < n; i++) {
        // try to cross 0
        if (pos > 0) {
            if (a[i] > pos) {
                pos -= a[i];
                count++;
            } else {
                pos += a[i];
            }
        } else {
            if (a[i] > -pos) {
                pos += a[i];
                count++;
            } else {
                pos -= a[i];
            }
        }
    }

    cout << count << endl;
}

// --- Fast I/O & Execution ---
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}