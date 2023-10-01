#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i=0;i<n;++i) cin >> A[i];
    int q;
    cin >> q;
    int ans = 1;
    for(int i=0;i<q;++i) {
        int k; cin >> k;
        if(! binary_search(A.begin(), A.end(), k)) ans = 0;
    }
    cout << ans << endl;
}


