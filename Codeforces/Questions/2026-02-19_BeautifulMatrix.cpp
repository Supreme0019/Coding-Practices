#include <bits/stdc++.h>

using namespace std;
int main() {
    int matrix[5][5];
    int a=0,b=0;
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                a=i;
                b=j;
            }
        }
    }
    int ans=abs(b-2)+abs(a-2);
    cout<<ans<<endl;
    return 0;
}