#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int baloons =0;
        vector<int> arr(26,0);
        for(char i:s){
            if(arr[i-'A']==0){
                baloons+=2;
                arr[i-'A']++;
            }
            else{
                baloons+=1;
            }
        }
        cout<<baloons<<endl;
    }
    return 0;
}