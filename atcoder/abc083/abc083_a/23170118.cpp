#include <bits/stdc++.h> 
using namespace std; 
int main() {
    int A,B,C,D,R,L;
    cin >> A >> B >> C >> D;
    L = A+B;
    R = C+D;
    string S;
    if(R>L) S = "Right";
    else if (R<L) S = "Left";
    else if (R==L)S = "Balanced";
    cout << S << endl;

}
