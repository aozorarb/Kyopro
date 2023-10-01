#include <bits/stdc++.h>
using namespace std;

int main () {
    double A,B, C, X;
    double p = 0;
    cin >> A >> B >> C >> X;
    if (A >= X) {
        p = 1.0;
    }else if (B >= X){
        p = C / (B-A);
    }
    printf("%.08f",p);
}