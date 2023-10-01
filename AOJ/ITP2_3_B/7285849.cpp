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
    for(int i=0;i<q;++i) {
        int com, b, e;
        cin >> com >> b >> e;
        vector<int> sec;
        for(int j=b;j<e;++j) sec.push_back(A[j]);
        sort(sec.begin(), sec.end());
        if(com == 0) cout << sec[0] << endl;
        else cout << sec[e-b-1] << endl;
    }
}

