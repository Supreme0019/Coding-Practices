/*
Platform: Codechef
Problem: Maximum Length Even Subarray
Link: https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/MXEVNSUB?tab=statement
Difficulty: easy
Date: 2026-02-14
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if((long long)n*(n+1)/2%2==0){
	        cout<<n<<endl;
	    }
	    else{
	        cout<<n-1<<endl;
	    }
	}
	return 0;
}


