#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    // First principle check: n/2 must be even for the sums to match
    if ((n / 2) % 2 != 0) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    long long sum_even = 0;
    long long sum_odd = 0;

    // Part 1: Print n/2 even numbers
    for (int i = 1; i <= n / 2; ++i) {
        int val = i * 2;
        cout << val << " ";
        sum_even += val;
    }

    // Part 2: Print n/2 - 1 odd numbers
    for (int i = 1; i < n / 2; ++i) {
        int val = (i * 2) - 1;
        cout << val << " ";
        sum_odd += val;
    }

    // Part 3: The magic last element
    cout << sum_even - sum_odd << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}