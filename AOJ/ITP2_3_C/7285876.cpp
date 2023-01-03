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
        int b, e, k, cnt = 0;
        cin >> b >> e >> k;
        for(int j=b;j<e;++j) if(A[j] == k) ++cnt;
        cout << cnt << endl;
    }
}

