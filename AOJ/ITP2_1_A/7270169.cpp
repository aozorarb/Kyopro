#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> A;
    int q;
    cin >> q;
    for(int i=0;i<q;++i) {
        int q, v;
        cin >> q;
        if(q == 0) {
            cin >> v;
            A.push_back(v);
        } else if(q == 1) {
            cin >> v;
            cout << A[v] << endl;
        } else if(q == 2) {
            A.pop_back();
        }
    }
}
