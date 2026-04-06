#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    getline(cin, s); // read full line including spaces
    unordered_set<char> ch;
    for(char i : s) {
        if(i!='{' && i!='}' && i!=',' && i!=' ') {
            ch.insert(i);
        }
    }
    cout << ch.size() << endl;
}

//frequency use

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string s;
//     getline(cin, s);
//     bool alphabet[26] = {false};
//     int count = 0;

//     for (char c : s) {
//         if (c >= 'a' && c <= 'z') {
//             if (!alphabet[c - 'a']) {
//                 alphabet[c - 'a'] = true;
//                 count++;
//             }
//         }
//     }
//     cout << count << endl;
// }