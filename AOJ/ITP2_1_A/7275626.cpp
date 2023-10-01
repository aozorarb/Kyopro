#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> A;
    int q;
    cin >> q;
    for(int i=0;i<q;++i) {
        int o, v;
        cin >> o;
        if(o == 0) {
            cin >> v;
            A.push_back(v);
        } else if(o == 1) {
            cin >> v;
            cout << A[v] << endl;
        } else if(o == 2) {
            A.pop_back();
        }
    }
}

