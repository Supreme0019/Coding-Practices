#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    for (int i = 1; i <= 10; i++) {
        // Condition 1: Cost ends in 0 (Pay with 10-burle coins)
        // Condition 2: Cost ends in r (Pay with 10-burle coins + the r-coin)
        if ((k * i) % 10 == 0 || (k * i) % 10 == r) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}