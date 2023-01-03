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
        int b, m, e;
        cin >> b >> m >> e;
        rotate(A.begin() + b, A.begin() + m, A.begin() + e);
    }

    for(int i=0;i<A.size();++i) cout << A[i] << " \n"[(i == A.size() - 1)];
}

