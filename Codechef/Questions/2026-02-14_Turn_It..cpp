/*
Platform: Codechef
Problem: Turn It
Link: https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/NFS
Difficulty: Easy
Date: 2026-02-14
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float u,v,a,s;
	    cin>>u>>v>>a>>s;
        if(u<=v){
            cout<<"Yes"<<endl;
        }
        else{
    	    float vel=sqrt(u*u - 2*a*s);
    	    if(vel>v){
    	        cout<<"No"<<endl;
    	    }
    	    else{
    	        cout<<"Yes"<<endl;
    	    }
        }
	}
}


