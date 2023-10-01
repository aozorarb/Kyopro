#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int> > A(n);
    for(int i=0;i<q;++i) {
        int o, t, x;
        cin >> o >> t;
        if(o == 0) {
            cin >> x;
            A[t].push_back(x);
        } else if(o == 1) {
            if(A[t].empty()) {
                cout << endl;
            } else {
                for(int j=0;j<A[t].size();++j) cout << A[t][j] << " \n"[(A[t].size()-1 == j)];
            }
        } else if(o == 2) {
            A[t].clear();
        }
    }
}

