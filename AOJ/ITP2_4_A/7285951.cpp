#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n;
    vector<int> A(n);
    for(int i=0;i<n;++i) cin >> A[i];
    cin >> q;
    for(int i=0;i<q;++i) {
        int b, e;
        cin >> b >> e;
        reverse(A.begin() + b, A.begin() + e);
    }

    for(int i=0;i<n;++i) cout << A[i] << " \n"[(i == n-1)];
}

