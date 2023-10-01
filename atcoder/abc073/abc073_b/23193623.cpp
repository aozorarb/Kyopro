#include <bits/stdc++.h> 
using namespace std; 
int main() {
    int N,res = 0;
    cin >> N;
    for (int i=0;i<N;i++){
        int l,r;
        cin >> l >> r;
        res += r-l+1;
    }
    cout << res << endl;
}

