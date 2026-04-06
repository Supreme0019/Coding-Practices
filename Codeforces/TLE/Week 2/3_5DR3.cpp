#include <bits/stdc++.h>
using namespace std;

const int MOD = 676767677;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;

        // Minimum f(a)
        cout << 1 % MOD << "\n";

        // Construct array
        for(int i = 0; i < x; i++) cout << 1 << " ";
        for(int i = 0; i < y; i++) cout << -1 << " ";
        cout << "\n";
    }
}