#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> A(n);
    for(int i=0;i<n;++i) cin >> A[i];
    int q; cin >> q;
    for(int i=0;i<q;++i) {
        int k; cin >> k;
        cout << lower_bound(A.begin(), A.end(), k) - A.begin() << endl;
    }
}

