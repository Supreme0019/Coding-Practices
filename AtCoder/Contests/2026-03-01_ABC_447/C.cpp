#include <bits/stdc++.h>


using namespace std;

int main() {
    string s,t;
    cin>>s>>t;
    string res1="",res2= "";
    for(char i:s){
        if(i!='a') res1+=i;

    }
    for(char i:t){
        if(i!='a') res2+=i;
    }
    if(res1!=res2){
        cout<<-1<<endl;
        return 0;
    }
    int i = 0, j = 0, sum = 0;
    int n = s.length(), m = t.length();
    
    // Use || to ensure we process the very last slot of 'A's after the final "wall"
    while (i < n || j < m) {
        int counts = 0;
        while (i < n && s[i] == 'A') {
            counts++;
            i++;
        }
    
        int countt = 0;
        while (j < m && t[j] == 'A') {
            countt++;
            j++;
        }
    
        sum += abs(counts - countt);
    
        // After counting 'A's, we are either at the end or at a non-A "wall"
        if (i < n && j < m) {
            i++; // Move past the Non-A character in S
            j++; // Move past the Non-A character in T
        }
    }
    cout << sum << endl;
}