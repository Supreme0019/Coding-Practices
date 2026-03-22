#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    // Optimization: Check up to sqrt(n)
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

// Function to find the next nearest prime
int nextPrime(int n) {
    // If n is less than 2, the next prime is always 2
    if (n < 2) return 2;

    int prime = n + 1;
    while (!isPrime(prime)) {
        prime++;
    }
    return prime;
}
int main() {
    int a,b;
    cin>>a>>b;
    if(b==nextPrime(a))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}