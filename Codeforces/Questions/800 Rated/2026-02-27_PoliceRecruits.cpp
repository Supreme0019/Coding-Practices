#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int av_of=0;
    int crime=0;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        if(x>0){
            av_of+=x;
        }
        else{
            if(av_of>0){
                av_of--;
            }
            else{
                crime++;
            }
        }
    }
    cout<<crime<<endl;
}