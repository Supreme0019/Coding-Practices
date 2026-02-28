#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n;
        int max_val = 0, count = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x > max_val) {
                max_val = x;
                count = 1; 
            } else if (x == max_val) {
                count++;  
            }
        }
        cout << count << endl;
    }
    return 0;
}