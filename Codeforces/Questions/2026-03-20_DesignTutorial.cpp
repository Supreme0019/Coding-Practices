#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if(n <= 1) return false;   // 0,1 not prime
    if(n == 2) return true;    // 2 is prime
    if(n % 2 == 0) return false; // even numbers >2 not prime

    for(int i = 3; i * i <= n; i += 2) {
        if(n % i == 0) return false;
    }
    return true;
}
int main() {
    int n;
    cin>>n;
    int i=3;
    int j=n-3;
    while(i<j){
        if(!(isPrime(i)&&isPrime(j))){
            cout<<i<<" "<<j<<endl;
        }
        else{
            i++;
            j++;
        }
    }
}

// Alternate and fast approach:
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     if(n % 2 == 0) {
//         cout << 4 << " " << n - 4 << endl;
//     } else {
//         cout << 9 << " " << n - 9 << endl;
//     }
// }