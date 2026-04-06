#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;
    //Vector to mark presence
    vector<bool> seen(26, false);

    for(char c : s) {
        c = tolower(c);
        seen[c - 'a'] = true;
    }

    for(int i = 0; i < 26; i++) {
        if(!seen[i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
//Aproach 2 (using set):
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     string s;
//     cin >> s;

//     set<char> st;

//     for (char c : s) {
//         st.insert(tolower(c));
//     }

//     if (st.size() == 26)
//         cout << "YES";
//     else
//         cout << "NO";

//     return 0;
// }