//Precompute
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> valid;

    for(int i = 1; valid.size() < 1000; i++) {
        if(i % 3 != 0 && i % 10 != 3) {
            valid.push_back(i);
        }
    }

    int t;
    cin >> t;
    while(t--) {
        int k;
        cin >> k;
        cout << valid[k-1] << endl;
    }
}

//Binary Search on answer
// #include <bits/stdc++.h>
// using namespace std;

// bool good(int x, int k) {
//     int cnt = 0;
//     for(int i = 1; i <= x; i++) {
//         if(i % 3 != 0 && i % 10 != 3) cnt++;
//     }
//     return cnt >= k;
// }

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int k;
//         cin >> k;

//         int l = 1, r = 2000, ans = 0;

//         while(l <= r) {
//             int mid = (l + r) / 2;
//             if(good(mid, k)) {
//                 ans = mid;
//                 r = mid - 1;
//             } else {
//                 l = mid + 1;
//             }
//         }

//         cout << ans << endl;
//     }
// }
