#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum=0;
    vector<string> shape(n);
    for(int i=0 ; i<n ; i++){
        cin>>shape[i];
        if(shape[i]=="Icosahedron"){
            sum+=20;
        }
        else if(shape[i]=="Cube"){
            sum+=6;
        }
        else if(shape[i]=="Tetrahedron"){
            sum+=4;
        }
        else if(shape[i]=="Dodecahedron"){
            sum+=12;
        }
        else{
            sum+=8;
        }
    }
    cout<<sum<<endl;
}
//APPORACH 2
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     unordered_map<string, int> faces = {
//         {"Tetrahedron", 4},
//         {"Cube", 6},
//         {"Octahedron", 8},
//         {"Dodecahedron", 12},
//         {"Icosahedron", 20}
//     };

//     long long sum = 0;   // long long just to be extra safe

//     string shape;
//     for(int i = 0; i < n; i++){
//         cin >> shape;
//         sum += faces[shape];
//     }

//     cout << sum << "\n";
//     return 0;
// }