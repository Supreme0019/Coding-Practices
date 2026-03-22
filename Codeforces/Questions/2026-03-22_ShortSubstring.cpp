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


        // ans.push_back(s[0]);
        // ans.push_back(s[1]);
        // for(int i=2 ; i<s.size() ; i++){

        //     if(s[i]!=ans.back()){
        //         ans.push_back(s[i]);
        //     }
        // }
    

        ans.push_back(s[0]);
        ans.push_back(s[1]);
        for(int i=2 ; i<s.size()-1 ; i+=2){

            if(s[i]!=ans.back()){
                ans.push_back(s[i]);
                ans.push_back(s[i+1]);
            }
            else if(s[i]==ans.back()){
                ans.push_back(s[i+1]);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}