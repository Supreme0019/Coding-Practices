/*
Platform: Codeforces
Problem: Holiday of Equality

Difficulty: Wasy
Date: 2026-03-20
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int mx = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        mx = max(mx, a[i]);  // find max directly
    }

    int cost = 0;
    for(int i = 0; i < n; i++){
        cost += (mx - a[i]);
    }

    cout << cost << endl;
    return 0;
}

