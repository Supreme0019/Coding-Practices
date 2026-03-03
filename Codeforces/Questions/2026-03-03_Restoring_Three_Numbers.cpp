/*
Platform: Codeforces
Problem: Restoring Three Numbers

Difficulty: Easy
Date: 2026-03-03
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> x(4);
    for(int i = 0; i < 4; i++) {
        cin >> x[i];
    }

    // Sort the numbers so the largest (a+b+c) is at the end
    sort(x.begin(), x.end());

    // x[3] is the sum (a+b+c)
    // Subtract the first three numbers from the sum to get a, b, and c
    cout << x[3] - x[0] << " " << x[3] - x[1] << " " << x[3] - x[2] << endl;

    return 0;
}


