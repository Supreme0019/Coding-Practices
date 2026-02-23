/*
Platform: Codeforces
Problem: Is your horseshoe on the other hoof
Link: NA
Difficulty: Easy
Date: 2026-02-23
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<int> colors = {s1, s2, s3, s4};

    cout << 4 - colors.size() << endl;

    return 0;
}

