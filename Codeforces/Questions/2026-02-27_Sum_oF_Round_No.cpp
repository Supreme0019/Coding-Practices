#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long place = 1;
        vector<long long> ans;

        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                ans.push_back(digit * place);
            }
            place *= 10;
            n /= 10;
        }

        cout << ans.size() << endl;
        for (long long x : ans) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}