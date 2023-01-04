#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int Q; cin >> Q;
    set<int> S;
    for(int i=0;i<Q;++i) {
        int o, x;
        cin >> o >> x;
        if(o == 0) {
            S.insert(x);
            cout << S.size() << endl;
        } else {
            cout << S.count(x) << endl;
        }
    }

}

