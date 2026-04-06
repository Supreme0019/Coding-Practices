#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a, b, c;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if(x == 1) a.push_back(i);
        else if(x == 2) b.push_back(i);
        else c.push_back(i);
    }

    int maxt = min({a.size(), b.size(), c.size()});
    cout << maxt << endl;

    for(int i = 0; i < maxt; i++) {
        cout << a[i] + 1 << " " 
             << b[i] + 1 << " " 
             << c[i] + 1 << endl;
    }
}