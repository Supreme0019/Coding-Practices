#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        string ans="";
        // for (int i = 0; i < s.size()-1; i++)
        // {
        //     if(s[i]==s[i+1]){
        //         s.erase(s.begin()+i+1);
        //     }
        // }
        ans.push_back(s[0]);
        ans.push_back(s[1]);
        for(int i=0 ; i<s.size() ; i++){

        }
        cout<<s<<endl;
    }

    return 0;
}