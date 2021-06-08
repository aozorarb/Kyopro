#include <bits/stdc++.h> 
using namespace std;
int main() {
    int n,k,c =1;
    cin >> n >> k;
    for (int i=0;i<n;i++){
        if (c+k>c*2)c*=2;
        else c+=k;
    }
    cout << c << endl;
}
