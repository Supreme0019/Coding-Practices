#include <bits/stdc++.h>
using namespace std;

int main() {
    
        vector<int> ref(4);
        for (int i = 0; i < 4; i++)
        {
            cin>>ref[i];
        }
        string s;
        cin>>s;
        int cal=0;
        for(char i:s){
            cal+=ref[i-'0'-1];
        }
        cout<<cal<<endl;
    

}